#include "D3DFormatHelp.h"
#include <D3D9.h>

DWORD D3DFormatHelp::GetSurfaceFormat()
{
	static const DWORD fmts[] =
	{
		MAKEFOURCC('N', 'V', '1', '2'),
		MAKEFOURCC('Y', 'U', 'Y', '2'),
		D3DFMT_X8R8G8B8
	};

	IDirect3D9* pD3D9 = 0;
	HRESULT hr = S_OK;
	pD3D9 = Direct3DCreate9(D3D_SDK_VERSION);
	if (!pD3D9)
	{
		hr = E_FAIL;
		return D3DFMT_X8R8G8B8;
	}
	UINT number = pD3D9->GetAdapterCount();

	DWORD res = D3DFMT_X8R8G8B8;
	D3DADAPTER_IDENTIFIER9 identifier;
	memset(&identifier, 0, sizeof(identifier));
	hr = pD3D9->GetAdapterIdentifier(D3DADAPTER_DEFAULT, 0, &identifier);
	if (S_OK == hr)
	{
		if (identifier.VendorId == 0x5333)  //our graphics card
		{
			/*
			*  我们的显卡可以正确分配NV12 surface空间 (lockrect)。 pitch等于width，分配line等于2被height，实际会使用1.5*height
			*  NV显卡与AMD显卡，分配的surface空间，可访问只有width * height。这怎样存储 width*height*1.5的数据呢！
			*/
			res = MAKEFOURCC('N', 'V', '1', '2');
		}
		else
			res = MAKEFOURCC('Y', 'U', 'Y', '2');
	}

	if (pD3D9)
		pD3D9->Release();
	return res;
}

DWORD D3DFormatHelp::GetRenderFormat()
{
	static const DWORD fmts[] =
	{
		MAKEFOURCC('N', 'V', '1', '2'),
		MAKEFOURCC('Y', 'U', 'Y', '2'),
		D3DFMT_X8R8G8B8
	};

	IDirect3D9* pD3D9 = 0;
	HRESULT hr = S_OK;
	pD3D9 = Direct3DCreate9(D3D_SDK_VERSION);
	if (!pD3D9)
	{
		hr = E_FAIL;
		return D3DFMT_X8R8G8B8;
	}
	DWORD res = D3DFMT_X8R8G8B8;

	UINT number = pD3D9->GetAdapterCount();

	D3DADAPTER_IDENTIFIER9 identifier;
	memset(&identifier, 0, sizeof(identifier));
	hr = pD3D9->GetAdapterIdentifier(D3DADAPTER_DEFAULT, 0, &identifier);
	if (hr == S_OK)
	{
		if (identifier.VendorId == 0x5333)  //our graphics card
		{
			res = MAKEFOURCC('N', 'V', '1', '2');
		}
		else
			res = D3DFMT_X8R8G8B8;
	}

	if (pD3D9)
		pD3D9->Release();
	return res;
}