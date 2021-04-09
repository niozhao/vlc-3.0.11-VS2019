#include "RenderThread.h"
#include "config.h"
#include "vlc_fixups.h"
#include "SurfaceData.h"

#define RELEASE(p){ if(p){p->Release(); p=NULL;}}

DWORD WINAPI PresentProc(LPVOID lpParameter)
{
	while (g_bThreadRun)
	{
		HRESULT hr = DoRender();
	}
	return 0;
}

HRESULT DoRender()
{
	__int64 funIn = gettimecount();
	HRESULT hr = S_OK;

	SurfaceData frame;
	bool bget = g_frames.GetAsyncMessage(&frame);
	if (!bget || !frame.IsValid())
		return S_OK;

	__int64 getFrame = gettimecount();

	if (!g_pSwapChain)
	{
		hr = CreateSwapChain(frame.width, frame.height);
		if (FAILED(hr))
			return S_FALSE;
	}


	/*SaveObjectThumbnail(frame.buffer.GetBuffer(), frame.width, frame.height, frame.pitch);

	if (m_bSnapShotSwitch&&m_SnapShotWidth!=0&&m_SnapShotHeight!=0)
	{
		SaveSnapShot(frame.buffer.GetBuffer(),frame.width,frame.height,frame.pitch);
		m_bSnapShotSwitch = false;
	}

	__int64 snapshotEnd = SysCall::gettimecount();

	memset(&m_LockRect, 0, sizeof(m_LockRect));
	hr=m_pSysSurface->LockRect(&m_LockRect, NULL, D3DLOCK_DISCARD);
	if(FAILED(hr))
	{
		::MaxWallLog::AddErrorLog(__FILE__, __LINE__,_T("S3StreamObject failed in GetBackBuffer(), hr = 0x%08x"),hr);
		hr = m_pSysSurface->UnlockRect();
		return E_FAIL;
	}
	__int64 lockEnd = SysCall::gettimecount();
	char*  pDestBuffer = (char*)m_LockRect.pBits;;

	char* buffer_for_copy = frame.buffer.GetBuffer();
	LONG row;
	for(row = 0; row < m_iHeight; row++ )
	{
		memcpy(pDestBuffer, buffer_for_copy, m_VLCDecoder.GetBytesPerPixel()*m_iWidth);
		buffer_for_copy += frame.pitch;
		pDestBuffer += m_LockRect.Pitch;
	}
	m_pSysSurface->UnlockRect();
	frame.buffer.Release();

	__int64 copyEnd = SysCall::gettimecount();
	*/
	LPDIRECT3DSURFACE9 currentSurface = g_player.getSufracePool()->get(frame.m_nIndex);
	if (currentSurface == NULL)
		return S_OK;

	LPDIRECT3DSURFACE9 pBackBuffer = NULL;
	hr = g_pSwapChain->GetBackBuffer(0, D3DBACKBUFFER_TYPE_MONO, &pBackBuffer);
    hr = g_pDevice->UpdateSurface(currentSurface, NULL, pBackBuffer, NULL);

	pBackBuffer->Release();

	__int64 updateEnd = gettimecount();

	hr = g_pSwapChain->Present(NULL, NULL, NULL, NULL, 0);


	g_player.getSufracePool()->recycle(frame.m_nIndex);

	__int64 funcEnd = gettimecount();

	char buf[1024] = { 0 };
	//snprintf(buf, 1024, "DoRender: %x, getFrameBlock:%lld,lockCost:%lld,updateCost:%lld,presentCost:%lld,totolCost:%lld, in:%lld,getFrame:%lld,lockEnd:%lld,updateEnd:%lld,funcEnd:%lld,mem:%d \n", 
	//	frameBuffer,getFrame - funIn,lockEnd - getFrame,updateEnd - lockEnd,funcEnd - updateEnd,funcEnd - getFrame, funIn, getFrame, lockEnd, updateEnd, funcEnd, m_pRenderEngine->IsMAMMEnabled());
	//snprintf(buf, 1024, "DoRender: %x, getFrameBlock:%lld,snapshotCost:%lld,lockCost:%lld,copydataCost:%lld,getbackbufferCost:%lld,updateCost:%lld,presentCost:%lld,totolCost:%lld, in:%lld,getFrame:%lld,lockEnd:%lld,updateEnd:%lld,funcEnd:%lld,mem:%d \n",
	//	frameBuffer, getFrame - funIn, snapshotEnd - getFrame, lockEnd - snapshotEnd, copyEnd - lockEnd, getBackBufferEnd - copyEnd, updateEnd - getBackBufferEnd, funcEnd - updateEnd, funcEnd - getFrame, funIn, getFrame, lockEnd, updateEnd, funcEnd, m_pRenderEngine->IsMAMMEnabled());
	snprintf(buf, 1024, "DoRender: %x, picture:%lld,getFrameBlock:%lld, updateCost:%lld, presentCost:%lld, funcEnd:%lld, mem:%d\n", frame.m_nIndex, frame.timeStamp, getFrame - funIn, updateEnd - getFrame, funcEnd - updateEnd, funcEnd, 0);
	OutputDebugStringA(buf);

	return hr;
}

void CreateSwapChain()
{

}
void CreateReaderThread()
{
	if (g_bThreadRun)
		return;
	g_hThreadHandle = ::CreateThread(NULL, 0, PresentProc, NULL, 0, NULL);
	g_bThreadRun = NULL != g_hThreadHandle;
	return;
}
void StopReaderThread()
{
	if (!g_bThreadRun)
	{
		return;
	}
	g_bThreadRun = false;
	WaitForSingleObject(g_hThreadHandle, INFINITE);
	::CloseHandle(g_hThreadHandle);
	g_hThreadHandle = NULL;
}

bool CheckD3d9()
{
	bool ret = false;
	HMODULE hDllLib = LoadLibrary(_T("D3d9.dll"));
	if (hDllLib != NULL)
	{
		ret = true;
		FreeLibrary(hDllLib);
	}
	return ret;
}

HRESULT CreateDevice()
{
	HRESULT hr = S_OK;

	D3DPRESENT_PARAMETERS pp;
	IDirect3D9* pD3D9 = NULL;
	try
	{
		if (CheckD3d9() == false)
		{
			MessageBox(g_hMainWnd, TEXT("Need DirectX. Please install it!"), NULL, 0);
			hr = E_FAIL;
			return hr;
		}

		IDirect3D9* pD3D9 = 0;
		pD3D9 = Direct3DCreate9(D3D_SDK_VERSION);
		if (!pD3D9)
		{
			MessageBox(g_hMainWnd, TEXT("Direct3DCreate9 FAILED!"), NULL, 0);
			hr = E_FAIL;
			return hr;
		}

		D3DCAPS9 hwCaps;
		HRESULT hr = pD3D9->GetDeviceCaps(0, D3DDEVTYPE_HAL, &hwCaps);

		D3DADAPTER_IDENTIFIER9 adapterIdentifier;
		pD3D9->GetAdapterIdentifier(0, 0, &adapterIdentifier);

		// create device
		DEVMODE   curMode;
		if (!EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &curMode))
		{
			hr = E_FAIL;
		}

		D3DFORMAT fmt;

		switch (curMode.dmBitsPerPel)
		{
		case 32:
			fmt = D3DFMT_X8R8G8B8;
			hr = S_OK;
			break;
		case 16:
			fmt = D3DFMT_R5G6B5;
			hr = S_OK;
			break;
		default:
			hr = E_FAIL;
			break;
		}

		ZeroMemory(&pp, sizeof(D3DPRESENT_PARAMETERS));


		pp.Windowed = TRUE;
		pp.hDeviceWindow = g_hMainWnd;
		pp.SwapEffect = D3DSWAPEFFECT_DISCARD;
		pp.BackBufferCount = 1;
		pp.BackBufferFormat = fmt;
		pp.PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE;
		pp.BackBufferWidth = 16;
		pp.BackBufferHeight = 16;

		RECT WindowRect;
		GetClientRect(g_hMainWnd, &WindowRect);

		hr = pD3D9->CreateDevice(D3DADAPTER_DEFAULT,
			D3DDEVTYPE_HAL,
			g_hMainWnd,
			D3DCREATE_PUREDEVICE | D3DCREATE_HARDWARE_VERTEXPROCESSING | D3DCREATE_MULTITHREADED | D3DCREATE_FPU_PRESERVE,
			&pp,
			&g_pDevice);

		hr = g_pDevice ? S_OK : hr;

	}// try
	catch (HRESULT hr1)
	{
		hr = hr1;
	}

	RELEASE(pD3D9);
	return hr;
	
}

HRESULT CreateSwapChain(int w, int h)
{
	if (!g_pDevice)
		return E_FAIL;

	int m_InternalWidth = (w + 31) / 32 * 32;
	int m_InternalHeight = (h + 7) / 8 * 8;

	D3DPRESENT_PARAMETERS PresentationParameters;

	ZeroMemory(&PresentationParameters, sizeof(D3DPRESENT_PARAMETERS));
	PresentationParameters.BackBufferWidth = m_InternalWidth;
	PresentationParameters.BackBufferHeight = m_InternalHeight;
	PresentationParameters.Windowed = TRUE;
	PresentationParameters.SwapEffect = D3DSWAPEFFECT_COPY;
	PresentationParameters.BackBufferFormat = D3DFMT_X8R8G8B8;
	PresentationParameters.Flags = D3DPRESENTFLAG_VIDEO | D3DPRESENTFLAG_LOCKABLE_BACKBUFFER;
	PresentationParameters.PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE;
	PresentationParameters.hDeviceWindow = g_hMainWnd;

	HRESULT hr = g_pDevice->CreateAdditionalSwapChain(&PresentationParameters, &g_pSwapChain);
	return hr;
	
}

void TestD3D()
{
	IDirect3D9* pD3D9 = 0;
	HRESULT hr = S_OK;
	pD3D9 = Direct3DCreate9(D3D_SDK_VERSION);
	if (!pD3D9)
	{
		MessageBox(g_hMainWnd, TEXT("Direct3DCreate9 FAILED!"), NULL, 0);
		hr = E_FAIL;
	}
	UINT number = pD3D9->GetAdapterCount();

	D3DADAPTER_IDENTIFIER9 identifier;
	memset(&identifier, 0, sizeof(identifier));
	hr = pD3D9->GetAdapterIdentifier(D3DADAPTER_DEFAULT, 0, &identifier);

	D3DDISPLAYMODE displayMode;
	memset(&displayMode, 0, sizeof(displayMode));
	hr = pD3D9->GetAdapterDisplayMode(D3DADAPTER_DEFAULT, &displayMode);

	number = pD3D9->GetAdapterModeCount(D3DADAPTER_DEFAULT, displayMode.Format);

	D3DFORMAT format = (D3DFORMAT)MAKEFOURCC('2', '1', 'V', 'N');
	hr = pD3D9->CheckDeviceType(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, displayMode.Format, format, TRUE);
	hr = pD3D9->CheckDeviceFormat(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, displayMode.Format, 0, D3DRTYPE_SURFACE, format);
	int debug;
	if (hr == D3DERR_NOTAVAILABLE)
		debug = 1;
	else if (hr != S_OK)
		debug = 2;

	format = (D3DFORMAT)MAKEFOURCC('N', 'V', '1', '2');
	hr = pD3D9->CheckDeviceType(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, displayMode.Format, format, TRUE);
	hr = pD3D9->CheckDeviceFormat(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, displayMode.Format, 0, D3DRTYPE_SURFACE, format);
	if (hr == D3DERR_NOTAVAILABLE)
		debug = 1;
	else if (hr != S_OK)
		debug = 2;

	format = (D3DFORMAT)842094158;
	hr = pD3D9->CheckDeviceType(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, displayMode.Format, format, TRUE);
	hr = pD3D9->CheckDeviceFormat(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, displayMode.Format, 0, D3DRTYPE_SURFACE, format);
	if (hr == D3DERR_NOTAVAILABLE)
		debug = 1;
	else if (hr != S_OK)
		debug = 2;

	format = D3DFMT_UYVY;
	hr = pD3D9->CheckDeviceType(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, displayMode.Format, format, TRUE);
	hr = pD3D9->CheckDeviceFormat(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, displayMode.Format, 0, D3DRTYPE_SURFACE, format);
	if (hr == D3DERR_NOTAVAILABLE)
		debug = 1;
	else if (hr != S_OK)
		debug = 2;

	format = D3DFMT_YUY2;
	hr = pD3D9->CheckDeviceType(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, displayMode.Format, format, TRUE);
	hr = pD3D9->CheckDeviceFormat(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, displayMode.Format, 0, D3DRTYPE_SURFACE, format);
	if (hr == D3DERR_NOTAVAILABLE)
		debug = 1;
	else if (hr != S_OK)
		debug = 2;
}