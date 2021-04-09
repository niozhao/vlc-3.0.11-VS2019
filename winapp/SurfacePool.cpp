#include "SurfacePool.h"

#ifndef SAFE_RELEASE
#define SAFE_RELEASE(p)			{ if(p) { (p)->Release(); (p) = NULL; } }
#endif

#define ARRAY_SIZE(array) ((int)(sizeof(array) / sizeof(array[0])))

SurfacePool::SurfacePool()
{
	m_nHead = 0;
	m_nTail = 0;

	memset(m_pool, 0, sizeof(m_pool));
}

void SurfacePool::SetDevice(LPDIRECT3DDEVICE9 pDevice)
{
	m_pd3dDevice = pDevice;
}

SurfacePool::~SurfacePool()
{
	Release();
}

void SurfacePool::Release()
{
	for (int i = 0; i < 4; i++)
		if (m_pool[i])
		{
			SAFE_RELEASE(m_pool[i]);
		}
}

bool SurfacePool::Init(int width, int height, D3DFORMAT format)
{
	Release();

	if (m_pd3dDevice == NULL)
		return true;
	int internalWidth = (width + 31) / 32 * 32;
	int internalHeight = (height + 7) / 8 * 8;

	for (int i = 0; i < 4; i++)
	{
		HRESULT hr = m_pd3dDevice->CreateOffscreenPlainSurface(internalWidth, internalHeight, \
			format, D3DPOOL_SYSTEMMEM, &m_pool[i], NULL);
		if (FAILED(hr))
		{
			//log
		}
	}
	return true;
}

char* SurfacePool::lock(int& index)
{
	AutoThreadSection locker(&Locker);
	if (m_nHead - m_nTail >= 4 || !m_pd3dDevice)  //buffer is full
		return NULL;
	else
	{
		index = m_nHead & (4 - 1);  //m_nHead % 4
		LPDIRECT3DSURFACE9 surface = m_pool[index];
		m_nHead++;

		memset(&m_LockRect, 0, sizeof(m_LockRect));
		HRESULT hr = surface->LockRect(&m_LockRect, NULL, D3DLOCK_DISCARD);
		if (FAILED(hr))
		{
			hr = surface->UnlockRect();
			return NULL;
		}
		return (char*)m_LockRect.pBits;
	}
}

void SurfacePool::unlock(int index)
{
	if (index < 0 || index >= 4 || !m_pd3dDevice)
		return;
	m_pool[index]->UnlockRect();
}

LPDIRECT3DSURFACE9 SurfacePool::get(int index)
{
	if (index < 0 || index >= 4)
		return NULL;
	return m_pool[index];
}

void SurfacePool::recycle(int index)
{
	AutoThreadSection locker(&Locker);
	if (m_nTail == m_nHead)
		return;  //is empty, will not happen
	m_nTail++;
}