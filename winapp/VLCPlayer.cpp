#include "VLCPlayer.h"
#include <algorithm>
#include "config.h"
#include "vlc_fixups.h"

static void* lock(void* data, void** p_pixels)
{
	VLCPlayer* player = (VLCPlayer*)data;
	int index;
	char* buffer = player->LockSurface(index);
	if (!buffer)
	{
		/**
		 *  give NULL to vlc will cause the officical vlc crash
		 *  we handled this issue in our lib, but give NULL will lost that frame.
		 */
		*p_pixels = NULL; 
	}
	else
	{
		*p_pixels = buffer;
		player->m_nSurfaceIndex = index;


		char buf[256] = { 0 };
		static __int64 lastTime = 0;
		__int64 current = gettimecount();
		snprintf(buf, 256, "vlc lock index: %d, gettimecount:%lld, lastOffset:%lld\n", index, current, current - lastTime);
		lastTime = current;
		OutputDebugStringA(buf);
	}
	return &player->m_tmpTimeStamp;; // Picture identifier, not needed here. 
}

// VLC just rendered a video frame. 
static void unlock(void* data, void* id, void* const* p_pixels)
{
	if (*p_pixels == NULL)
		return;

	VLCPlayer* player = (VLCPlayer*)data;

	player->UnlockSurface(player->m_nSurfaceIndex);
	IMessagePutter<SurfaceData>* pPutter = player->GetFramePutter();

	char buf[256] = { 0 };
	static __int64 lastTime = 0;
	__int64 current = gettimecount();
	snprintf(buf, 256, "vlc unlock: %x, picture:%lld, gettimecount:%lld, lastOffset:%lld\n", player->m_nSurfaceIndex, player->m_tmpTimeStamp,current, current - lastTime);
	lastTime = current;
	OutputDebugStringA(buf);

	pPutter->PutAsyncMessage(SurfaceData(player->m_nSurfaceIndex, player->GetVideoWidth(), player->GetVideoHeight(), player->GetPitchSize(), player->m_tmpTimeStamp));
}

static unsigned video_format_callback(void** opaque, char* chroma,
	unsigned* width, unsigned* height,
	unsigned* pitches,
	unsigned* lines)
{
	VLCPlayer* player = (VLCPlayer*)*opaque;
	memcpy(chroma, "DX11", 2);
	int outWith, outHeight;
	outWith = player->GetVideoWidth();
	outHeight = player->GetVideoHeight();
	if (!(outWith && outHeight))
	{
		player->SetVideoSize(*width, *height);
		player->SetOutSize(*width, *height);
	}
	else
	{
		player->SetVideoSize(*width, *height);
		*width = outWith;
		*height = outHeight;
	}
	player->InitSurfacePool();
	*pitches = player->GetPitchSize();
	*lines = *height;
	return *pitches * (*height);
}

VLCPlayer::VLCPlayer()
{
	m_strURL = "";
	m_bThreadRun = false;
	m_hThreadHandle = NULL;
	m_nFrameRateDen = 0;
	m_nFrameRateNum = 0;

	m_pInstance = NULL;
	m_pMedia = NULL;
	m_pPlayer = NULL;
	m_bVLCRun = false;

	m_surfacePool.SetDevice(NULL);
	m_nSurfaceIndex = -1;
	m_tmpTimeStamp = 0;
}

void VLCPlayer::Start()
{
	Init();
	Play();
}

void VLCPlayer::Stop()
{
	Release();
}



bool VLCPlayer::Init()
{
	Release();

	if (m_strURL.empty())
	{
		return false;
	}
	// If you don't have this variable set you must have plugins directory 
	// with the executable or libvlc_new() will not work! 
	//printf("VLC_PLUGIN_PATH=%s\n", getenv("VLC_PLUGIN_PATH")); 
	char const* vlc_argv[] =
	{

		//"--no-audio", // Don't play audio. 
		"--no-xlib", // Don't use Xlib. 
		// Apply a video filter. 
		//"--video-filter", "sepia", 
		//"--sepia-intensity=200" 
	};
	int vlc_argc = sizeof(vlc_argv) / sizeof(*vlc_argv);
	m_pInstance = libvlc_new(vlc_argc, vlc_argv);
	if (NULL == m_pInstance)
	{
		printf("LibVLC initialization failure.\n");
		return false;
	}
	if (IsNetworkSource(m_strURL))
	{
		m_pMedia = libvlc_media_new_location(m_pInstance, m_strURL.c_str());
		if (m_strURL.find("udp://") != std::string::npos ||//is udp stream
			m_strURL.find("rtsp://") != std::string::npos)//is rtsp stream
		{
			char szCacheTime[128];
			sprintf(szCacheTime, "network-caching=%d", 40);
			libvlc_media_add_option(m_pMedia, szCacheTime);
			libvlc_media_add_option(m_pMedia, "avcodec-threads=1");
		}
	}
	else
	{
		m_pMedia = libvlc_media_new_path(m_pInstance, m_strURL.c_str());
		libvlc_media_track_t** pTrackInfo = NULL;
		libvlc_media_parse(m_pMedia);

		unsigned int trackCount = libvlc_media_tracks_get(m_pMedia, &pTrackInfo);
		if (!ParseVideoInfo(pTrackInfo, trackCount))
		{
			//return false;
		}
	}


	m_pPlayer = libvlc_media_player_new_from_media(m_pMedia);
	libvlc_media_release(m_pMedia);
	m_pMedia = NULL;

	libvlc_media_player_set_hwnd(m_pPlayer, (void*)g_hMainWnd);
	//libvlc_video_set_callbacks(m_pPlayer, lock, unlock, NULL, this);
	//libvlc_video_set_format(m_pPlayer, m_strFourCC.c_str(), m_nOutWidth, m_nOutHeight, m_nPitchSize);
	//libvlc_video_set_format_callbacks(m_pPlayer, video_format_callback, NULL);
	return true;
}
bool VLCPlayer::Play()
{
	if (!m_pPlayer)
	{
		return false;
	}
	if (m_bVLCRun)
	{
		Release();
	}
	if (libvlc_media_player_play(m_pPlayer) == 0)
	{
		m_bVLCRun = true;
		return true;
	}
	return false;
}

void VLCPlayer::StopVLC()
{
	if (m_pPlayer && m_bVLCRun)
	{
		libvlc_media_player_stop(m_pPlayer);
		m_bVLCRun = false;
	}

}

void VLCPlayer::Release()
{
	StopVLC();
	if (m_pMedia)
	{
		libvlc_media_release(m_pMedia);
		m_pMedia = NULL;
	}
	if (m_pPlayer)
	{
		libvlc_media_player_release(m_pPlayer);
		m_pPlayer = NULL;
	}
	if (m_pInstance)
	{
		libvlc_release(m_pInstance);
		m_pInstance = NULL;
	}
}

bool VLCPlayer::IsNetworkSource(const std::string& url)
{
	std::string lowerUrl(url.length() + 1, '\0');
	std::transform(url.begin(), url.end(), lowerUrl.begin(), tolower);
	if (lowerUrl.find("rtsp://") != std::string::npos)
		return true;
	if (lowerUrl.find("udp://") != std::string::npos)
		return true;
	if (lowerUrl.find("http://") != std::string::npos)
		return true;
	if (lowerUrl.find("mms://") != std::string::npos)
		return true;
	if (lowerUrl.find("rtp://") != std::string::npos)
		return true;
	if (lowerUrl.find("tcp://") != std::string::npos)
		return true;
	return false;
}

bool VLCPlayer::ParseVideoInfo(libvlc_media_track_t** pTrackInfo, int trackCount)
{
	for (int i = 0; i < trackCount; ++i)
	{
		libvlc_media_track_t* track = *(pTrackInfo + i);
		if (track->i_type == libvlc_track_video)
		{
			m_nFrameRateDen = track->video->i_frame_rate_den;
			m_nFrameRateNum = track->video->i_frame_rate_num;
			return true;
		}
		if (track->i_type == libvlc_track_audio)
		{
			//printf("audio,chanel=%d,rate=%d\n",track->audio->i_channels,track->audio->i_rate);
		}

	}
	return false;
}