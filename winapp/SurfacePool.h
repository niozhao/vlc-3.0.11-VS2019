#pragma once
#include <D3D9.h>
#include "CritSection.h"

#define DECODER_SURFACE_POOL_SIZE 4
class SurfacePool
{
public:
	SurfacePool();
	~SurfacePool();
	bool Init(int width, int height, D3DFORMAT format);
	void SetDevice(LPDIRECT3DDEVICE9 pDevice);

	int getSurfacePitch();
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
	LPDIRECT3DSURFACE9  m_pool[DECODER_SURFACE_POOL_SIZE];
	D3DLOCKED_RECT      m_LockRect;
	ThreadSection		Locker;
	int                 m_surfacePitch;
};

class SurfaceData
{
public:
	int m_nIndex;
	int pitch;
	int width, height;
	__int64 timeStamp;
	SurfaceData()
	{
		this->m_nIndex = -1;
		this->pitch = 0;
		this->width = 0;
		this->height = 0;
		this->timeStamp = 0;
	}
	SurfaceData(int index, int width, int height, int pitch, __int64 time)
	{
		this->m_nIndex = index;
		this->pitch = pitch;
		this->width = width;
		this->height = height;
		this->timeStamp = time;
	}
	bool IsValid()const
	{
		return (m_nIndex >= 0) && pitch && width && height;
	}
};
