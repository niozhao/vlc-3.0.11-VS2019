#pragma once
#include <D3D9.h>
#include "CritSection.h"

class SurfacePool
{
public:
	SurfacePool();
	~SurfacePool();
	bool Init(int width, int height, D3DFORMAT format);
	void SetDevice(LPDIRECT3DDEVICE9 pDevice);

	//for producer
	char* lock(int& index);
	void unlock(int index);

	//for consumer
	LPDIRECT3DSURFACE9 get(int index);
	void recycle(int index);

private:
	void Release();

	volatile unsigned long long m_nHead;
	volatile unsigned long long m_nTail;
	LPDIRECT3DDEVICE9 m_pd3dDevice;
	LPDIRECT3DSURFACE9  m_pool[4];
	D3DLOCKED_RECT      m_LockRect;
	ThreadSection		Locker;
};

