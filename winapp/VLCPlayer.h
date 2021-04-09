#pragma once
#include "framework.h"
#include <string>
#include "vlc/vlc.h"
#include "SurfacePool.h"
#include "SurfaceData.h"
#include "BaseMessage.h"

extern HWND g_hMainWnd;

class VLCPlayer
{
public:
	VLCPlayer();
	void Start();
	void Stop();
	
	//surfacePool
	SurfacePool* getSufracePool()
	{
		return &m_surfacePool;
	}

	void InitSurfacePool()
	{
		m_surfacePool.Init(m_nVideoWidth, m_nVideoHeight, (D3DFORMAT)MAKEFOURCC('N', 'V', '1', '2'));
	}
	char* LockSurface(int& index)
	{
		return m_surfacePool.lock(index);
	}

	void UnlockSurface(int index)
	{
		return m_surfacePool.unlock(index);
	}
	LPDIRECT3DSURFACE9 get(int index)
	{
		return m_surfacePool.get(index);
	}
	void recycle(int index)
	{
		return m_surfacePool.recycle(index);
	}
	int GetVideoWidth()const
	{
		return m_nVideoWidth;
	}
	int GetVideoHeight()const
	{
		return m_nVideoHeight;
	}
	int GetPitchSize()const
	{
		return m_nPitchSize;
	}
	void SetVideoSize(int width, int height)
	{
		m_nVideoWidth = width;
		m_nVideoHeight = height;
	}
	void SetOutSize(int width, int height)
	{
		m_nVideoWidth = width;
		m_nVideoHeight = height;
		m_nPitchSize = m_nVideoWidth * 4;
	}
	void SetFramePutter(IMessagePutter<SurfaceData>* putter)
	{
		m_pFramePutter = putter;
	}
	IMessagePutter<SurfaceData>* GetFramePutter()
	{
		return m_pFramePutter;
	}
	void SetURL(const std::string& url)
	{
		m_strURL = url;
	}

	void SetDevice(IDirect3DDevice9* device)
	{
		m_surfacePool.SetDevice(device);
	}
private:
	bool Init();
	bool Play();
	void Release();
	void StopVLC();
	bool IsNetworkSource(const std::string& url);
	bool ParseVideoInfo(libvlc_media_track_t** pTrackInfo, int trackCount);
	
private:
	std::string      m_strURL;
	bool             m_bThreadRun;
	HANDLE			 m_hThreadHandle;
	int              m_nFrameRateDen;
	int              m_nFrameRateNum;//FrameRate=m_nFrameRateNum/m_nFrameRateDen

	int              m_nVideoWidth;
	int              m_nVideoHeight;
	int              m_nPitchSize;

	libvlc_instance_t*      m_pInstance;
	libvlc_media_t*         m_pMedia;
	libvlc_media_player_t*  m_pPlayer;
	bool                    m_bVLCRun;

	SurfacePool             m_surfacePool;
	IMessagePutter<SurfaceData>* m_pFramePutter;
public:
	int                     m_nSurfaceIndex;
	int64_t                 m_tmpTimeStamp;
};

