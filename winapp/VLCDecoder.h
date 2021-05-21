#pragma once

typedef size_t ssize_t;
#include "vlc/vlc.h" 
#include "VideoDecoder.h"
#include "BufferPool.h"
class VLCDecoder:public IVideoDecoder
{
public:
	enum VLCRunMode {
		WINDOW_DIRECT_DRAW,
		MEMORY_CALL_BACK
	};
	VLCDecoder(BufferType type);
	VLCDecoder();
	virtual ~VLCDecoder();
	virtual bool Init();
	virtual bool Start();
	virtual void Stop();
	virtual void Release();
    bool SetVolume(int volume);
	void SetRunMode(VLCRunMode mode, HANDLE hDrawWindow = NULL);
	void SetUdpCacheTime(int milliSecond = 200)
	{
        if(milliSecond < 5)
            milliSecond = 200;

		m_nUdpCacheTime = milliSecond;
	}
    LARGE_INTEGER lastTextureUpdateTime; 

	static IVideoDecoder::BufferType WhichPoolType();
private:
	bool IsNetworkSource(const std::string& url);
	bool ParseVideoInfo(libvlc_media_track_t** pTrackInfo,int TrackCount);
	libvlc_instance_t* m_pInstance;
	libvlc_media_t* m_pMedia;
	libvlc_media_player_t* m_pPlayer;
	bool m_bDecodeRun;
	int m_nUdpCacheTime;
	VLCRunMode m_mode;
	HANDLE     m_window;
public:
	Buffer                  m_pUserTempData;
	int                     m_nSurfaceIndex;
	int64_t                 m_timeStamp;
};