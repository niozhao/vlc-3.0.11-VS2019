#include "renderThread.h"
#include "config.h"
#include "vlc_fixups.h"
#include "FourccHelp.h"

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

	SurfaceData frame_surface;
	FrameData frame_buffer;
	int queueSize = 0;
	int frameWidth = 0;
	int frameHeight = 0;
	int framePitch = 0;
	__int64 frameTimestamp = 0;
	if (g_player.GetBufferType() == IVideoDecoder::NORMAL_BUFFER)
	{
		bool bget = g_frames_buffer.GetAsyncMessage(&frame_buffer);
		if (!bget || !frame_buffer.IsValid())
			return S_OK;
		queueSize = g_frames_buffer.queezeSize();
		frameWidth = frame_buffer.width;
		frameHeight = frame_buffer.height;
		framePitch = frame_buffer.pitch;
		frameTimestamp = frame_buffer.timeStamp;
	}
	else
	{
		bool bget = g_frames_surface.GetAsyncMessage(&frame_surface);
		if (!bget || !frame_surface.IsValid())
			return S_OK;
		queueSize = g_frames_surface.queezeSize();
		frameWidth = frame_surface.width;
		frameHeight = frame_surface.height;
		framePitch = frame_surface.pitch;
		frameTimestamp = frame_surface.timeStamp;
	}
	__int64 getFrame = gettimecount();

	if (!g_pSwapChain)
	{
		hr = InitSurface(frameWidth, frameHeight);
		if (FAILED(hr))
			return S_FALSE;
	}

	LPDIRECT3DSURFACE9 currentSurface = NULL;
	if (g_player.GetBufferType() == IVideoDecoder::NORMAL_BUFFER)
	{
		//from I420 to YUY2
		D3DLOCKED_RECT      lockRect;
		HRESULT hr = g_pSysSurface->LockRect(&lockRect, NULL, D3DLOCK_DISCARD);
		if (FAILED(hr))
			return S_FALSE;

		uint8_t *src[4] = { 0 }; int src_stride[4] = { 0 };
		uint8_t *dst[4] = { 0 }; int dst_stride[4] = { 0 };
		if (g_player.GetBufferFmt() != MAKEFOURCC('I', '4', '2', '0') && g_SurfaceFormat != MAKEFOURCC('Y', 'U', 'Y', '2'))
			return S_FALSE;

		src[0] = (uint8_t*)frame_buffer.buffer.GetBuffer();
		src[1] = src[0] + framePitch * frameHeight;
		src[2] = src[1] + framePitch * frameHeight / 4;
		src_stride[0] = framePitch;
		src_stride[1] = framePitch / 2;
		src_stride[2] = framePitch / 2;
		dst[0] = (uint8_t*)lockRect.pBits;
		dst_stride[0] = lockRect.Pitch;
		int res = sws_scale(g_pSwsctx, src, src_stride, 0, frameHeight, dst, dst_stride);

		hr = g_pSysSurface->UnlockRect();

		currentSurface = g_pSysSurface;
	}
	else
	{
		currentSurface = g_player.get(frame_surface.m_nIndex);
	}
	__int64 convertPixEnd = gettimecount();

	if (currentSurface == NULL)
		return S_OK;

	LPDIRECT3DSURFACE9 pBackBuffer = NULL;
	hr = g_pSwapChain->GetBackBuffer(0, D3DBACKBUFFER_TYPE_MONO, &pBackBuffer);

	__int64 lockEnd = gettimecount();
	if (g_pSurfaceTemp != NULL)
	{
		hr = g_pDevice->UpdateSurface(currentSurface, NULL, g_pSurfaceTemp, NULL);
		hr = g_pDevice->StretchRect(g_pSurfaceTemp, NULL, pBackBuffer, NULL, D3DTEXF_NONE);
	}
	else
	{
		hr = g_pDevice->UpdateSurface(currentSurface, NULL, pBackBuffer, NULL);
	}

	if (g_player.GetBufferType() == IVideoDecoder::D3D9_SURFACE)
	{
		g_player.recycle(frame_surface.m_nIndex);
	}

	pBackBuffer->Release();

	__int64 updateEnd = gettimecount();

	hr = g_pSwapChain->Present(NULL, NULL, NULL, NULL, 0);

	__int64 funcEnd = gettimecount();

	//char buf[1024] = { 0 };
	//snprintf(buf, 1024, "DoRender: timeStamp:%lld, queueSize:%d, getFrameBlock:%lld,convertCost:%lld,lockCost:%lld,updateCost:%lld,presentCost:%lld,totolCost:%lld ,mem:%d \n",
	//	frameTimestamp, queueSize, getFrame - funIn, convertPixEnd - getFrame, lockEnd - convertPixEnd, updateEnd - lockEnd, funcEnd - updateEnd, funcEnd - getFrame, m_pRenderEngine->IsMAMMEnabled());
	//OutputDebugStringA(buf);

	return hr;
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

HRESULT InitSurface(int width, int height)
{
	if (!g_pDevice)
		return E_FAIL;


	HRESULT hr = S_OK;

	RELEASE(g_pSwapChain);
	RELEASE(g_pSurfaceTemp);
	RELEASE(g_pSysSurface);
	if (g_pSwsctx)
		sws_freeContext(g_pSwsctx);

	int internalWidth = (width + 31) / 32 * 32;
	int internalHeight = (height + 7) / 8 * 8;

	if (g_player.GetBufferType() == IVideoDecoder::NORMAL_BUFFER)
	{
		hr = g_pDevice->CreateOffscreenPlainSurface(internalWidth, internalHeight, g_SurfaceFormat, D3DPOOL_SYSTEMMEM, &g_pSysSurface, NULL);
		if (FAILED(hr)) return hr;
	}

	bool bNeedFmtConvert = g_SurfaceFormat != D3DFMT_X8R8G8B8;
	bool bNeedCreateTmp = bNeedFmtConvert;
	/**
	 *  1：不需要格式转换：无需创建m_pSurfaceTemp，UpdateSurface可以完成systemMemory到VideoMemory的更新
	 * :2：需要格式转换：如果是我们S3的显卡，并且CheckRawUpdateSurfaceSupport() 为true时，不需要创建m_pSurfaceTemp，RawUpdateSurface可以完成
	 *     其他情况，需要创建D3DPOOL_DEFAULT 的 m_pSurfaceTemp来进行中转。
	 */
	if (bNeedCreateTmp)
	{
		hr = g_pDevice->CreateOffscreenPlainSurface(internalWidth, internalHeight, g_SurfaceFormat, D3DPOOL_DEFAULT, &g_pSurfaceTemp, NULL);
		if (FAILED(hr)) return hr;
	}

	g_pSwsctx = sws_getContext(width, height, (AVPixelFormat)FourccHelp::toFFmepgFmt(g_player.GetBufferFmt()), \
		internalWidth, internalHeight, (AVPixelFormat)FourccHelp::toFFmepgFmt(g_SurfaceFormat), \
		SWS_FAST_BILINEAR, NULL, NULL, NULL);

	//Initial
	D3DPRESENT_PARAMETERS PresentationParameters;

	ZeroMemory(&PresentationParameters, sizeof(D3DPRESENT_PARAMETERS));
	PresentationParameters.BackBufferWidth = internalWidth;
	PresentationParameters.BackBufferHeight = internalHeight;
	PresentationParameters.Windowed = TRUE;
	PresentationParameters.SwapEffect = D3DSWAPEFFECT_COPY;
	PresentationParameters.BackBufferFormat = D3DFMT_X8R8G8B8;
	PresentationParameters.Flags = D3DPRESENTFLAG_VIDEO | D3DPRESENTFLAG_LOCKABLE_BACKBUFFER;
	PresentationParameters.PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE;

	D3DDEVICE_CREATION_PARAMETERS CreationParameters;

	hr = g_pDevice->GetCreationParameters(&CreationParameters);
	if (SUCCEEDED(hr))
	{
		PresentationParameters.hDeviceWindow = CreationParameters.hFocusWindow;

		hr = g_pDevice->CreateAdditionalSwapChain(&PresentationParameters, &g_pSwapChain);
	}

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

	number = pD3D9->GetAdapterModeCount(D3DADAPTER_DEFAULT, D3DFMT_X8R8G8B8);  //支持D3DFMT_X8R8G8B8格式的mode个数为13
	for (int i = 0; i < number; i++)
		hr = pD3D9->EnumAdapterModes(D3DADAPTER_DEFAULT, displayMode.Format, i, &displayMode);  //可以遍历枚举这13种分别是什么mode

	number = pD3D9->GetAdapterModeCount(D3DADAPTER_DEFAULT, (D3DFORMAT)MAKEFOURCC('N', 'V', '1', '2')); //支持NV12格式的mode个数为0
	number = pD3D9->GetAdapterModeCount(D3DADAPTER_DEFAULT, D3DFMT_R5G6B5);

	D3DCAPS9 caps;
	hr = pD3D9->GetDeviceCaps(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, &caps);


	int debug = 0;
	D3DFORMAT format = (D3DFORMAT)MAKEFOURCC('N', 'V', '1', '2');
	hr = pD3D9->CheckDeviceType(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, D3DFMT_X8R8G8B8, format, TRUE); //我的AMD不支持 NV12到 XRGB
	hr = pD3D9->CheckDeviceFormat(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, D3DFMT_X8R8G8B8, 0, D3DRTYPE_SURFACE, (D3DFORMAT)MAKEFOURCC('N', 'V', '1', '2'));
	hr = pD3D9->CheckDeviceFormatConversion(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, (D3DFORMAT)MAKEFOURCC('N', 'V', '1', '2'), D3DFMT_X8R8G8B8);
	if (hr == D3DERR_NOTAVAILABLE)
		debug = 1;
	else if (hr != S_OK)
		debug = 2;
	else if (hr == S_OK)
		debug = 3;
	LPDIRECT3DSURFACE9 tmpSurface;
	int width = 16;
	int height = 16;
	hr = g_pDevice->CreateOffscreenPlainSurface(width, height, format, D3DPOOL_SYSTEMMEM, &tmpSurface, NULL);
	if (SUCCEEDED(hr))
	{
		D3DLOCKED_RECT lockRect;
		hr = tmpSurface->LockRect(&lockRect, NULL, D3DLOCK_DISCARD);
		if (SUCCEEDED(hr))
		{
			char* p = (char*)lockRect.pBits;
			memset(p, 0, height * lockRect.Pitch);
			p += height * lockRect.Pitch;
			for (int i = 0; i < height; i++)
				for (int j = 0; j < lockRect.Pitch; j++)
					p[i * lockRect.Pitch + j] = 0;
			hr = tmpSurface->UnlockRect();
		}
		if (tmpSurface)
			tmpSurface->Release();
		tmpSurface = NULL;
	}




	format = (D3DFORMAT)MAKEFOURCC('I', '4', '2', '0');
	hr = pD3D9->CheckDeviceType(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, displayMode.Format, format, TRUE);
	hr = pD3D9->CheckDeviceFormat(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, displayMode.Format, 0, D3DRTYPE_SURFACE, format);
	hr = pD3D9->CheckDeviceFormatConversion(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, format, D3DFMT_X8R8G8B8);
	if (hr == D3DERR_NOTAVAILABLE)
		debug = 1;
	else if (hr != S_OK)
		debug = 2;
	else if (hr == S_OK)
		debug = 3;


	format = (D3DFORMAT)MAKEFOURCC('Y', 'V', '1', '2');
	hr = pD3D9->CheckDeviceType(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, displayMode.Format, format, TRUE);
	hr = pD3D9->CheckDeviceFormat(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, displayMode.Format, 0, D3DRTYPE_SURFACE, format);
	hr = pD3D9->CheckDeviceFormatConversion(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, format, D3DFMT_X8R8G8B8);
	if (hr == D3DERR_NOTAVAILABLE)
		debug = 1;
	else if (hr != S_OK)
		debug = 2;
	else if (hr == S_OK)
		debug = 3;
	width = 16;
	height = 16;
	hr = g_pDevice->CreateOffscreenPlainSurface(width, height, format, D3DPOOL_SYSTEMMEM, &tmpSurface, NULL);
	if (SUCCEEDED(hr))
	{
		D3DLOCKED_RECT lockRect;
		hr = tmpSurface->LockRect(&lockRect, NULL, D3DLOCK_DISCARD);
		if (SUCCEEDED(hr))
		{
			char* p = (char*)lockRect.pBits;
			memset(p, 0, height * lockRect.Pitch);
			p += height * lockRect.Pitch;
			for (int i = 0; i < height; i++)
				for (int j = 0; j < lockRect.Pitch / 2; j++)
					p[i * lockRect.Pitch + j] = 0;
			hr = tmpSurface->UnlockRect();
		}
		if (tmpSurface)
			tmpSurface->Release();
		tmpSurface = NULL;
	}

	format = (D3DFORMAT)MAKEFOURCC('I', 'M', 'C', '2');
	hr = pD3D9->CheckDeviceType(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, displayMode.Format, format, TRUE);
	hr = pD3D9->CheckDeviceFormat(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, displayMode.Format, 0, D3DRTYPE_SURFACE, format);
	hr = pD3D9->CheckDeviceFormatConversion(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, format, D3DFMT_X8R8G8B8);
	if (hr == D3DERR_NOTAVAILABLE)
		debug = 1;
	else if (hr != S_OK)
		debug = 2;
	else if (hr == S_OK)
		debug = 3;

	format = (D3DFORMAT)MAKEFOURCC('I', 'M', 'C', '4');
	hr = pD3D9->CheckDeviceType(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, displayMode.Format, format, TRUE);
	hr = pD3D9->CheckDeviceFormat(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, displayMode.Format, 0, D3DRTYPE_SURFACE, format);
	hr = pD3D9->CheckDeviceFormatConversion(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, format, D3DFMT_X8R8G8B8);
	if (hr == D3DERR_NOTAVAILABLE)
		debug = 1;
	else if (hr != S_OK)
		debug = 2;
	else if (hr == S_OK)
		debug = 3;

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