#include "VLCDecoder.h"

// VLC prepares to render a video frame. 
static void *lock(void *data, void **p_pixels) 
{ 
	VLCDecoder* decoder=(VLCDecoder*)data;
	Buffer buffer;
	int index = -1;
	char* pDest = NULL;
	IVideoDecoder::BufferType type = decoder->GetBufferType();
	if (type == IVideoDecoder::D3D9_SURFACE)
	{
		pDest = decoder->LockSurface(index);
	}
	else
	{
		buffer = decoder->GetBuffer();
		pDest = buffer.GetBuffer();
	}
	if (!pDest)
	{
		/**
		 *  give NULL to vlc will cause the officical vlc crash
		 *  we handled this issue in our lib, but give NULL will lost that frame.
		 *  if the fmt is multi planners, we need set multi NULL [5 is the max planner], or will crash!
		 */
		*p_pixels = NULL;
		*(p_pixels + 1) = NULL;
		*(p_pixels + 2) = NULL;
		*(p_pixels + 3) = NULL;
	}
	else
	{
		int bufferPitch = decoder->GetPitchSize();
		DWORD bufferFmt = decoder->GetBufferFmt();
		int videoHeight = decoder->GetVideoHeight();
		switch (bufferFmt)
		{
		case MAKEFOURCC('N', 'V', '1', '2'):
		{
			//two planners
			char* planner_Y = pDest;
			char* planner_UV = planner_Y + bufferPitch * videoHeight;
			*p_pixels = planner_Y;
			*(p_pixels + 1) = planner_UV;
			//test memory writable, vlc will write pixes to those memory!
			memset(planner_Y, 0, bufferPitch * videoHeight);  //if crash here, means GraphicsCard handle this fmt error!
			memset(planner_UV, 0, bufferPitch * videoHeight / 2);
		}
		break;
		case MAKEFOURCC('I', '4', '2', '0'):
		{
			//three planners
			char* planner_Y = pDest;
			char* planner_U = planner_Y + bufferPitch * videoHeight;
			char* planner_V = planner_U + bufferPitch * videoHeight / 4;
			*p_pixels = planner_Y;
			*(p_pixels + 1) = planner_U;
			*(p_pixels + 2) = planner_V;
			//test memory writable, vlc will write pixes to those memory!
			memset(planner_Y, 0, bufferPitch * videoHeight);  //if crash here, means GraphicsCard handle this fmt error!
			memset(planner_U, 0, bufferPitch * videoHeight / 4);
			memset(planner_V, 0, bufferPitch * videoHeight / 4);
		}
		break;
		case MAKEFOURCC('Y', 'U', 'Y', '2'):
		case D3DFMT_X8R8G8B8:
		{
			//just one planner
			*p_pixels = pDest;
			//test memory writable
			memset(pDest, 0, bufferPitch * videoHeight);
		}
		break;
		default:
		{
			*p_pixels = NULL;
			*(p_pixels + 1) = NULL;
			*(p_pixels + 2) = NULL;
			*(p_pixels + 3) = NULL; 
		}
			return NULL;
		}
		decoder->m_pUserTempData = buffer;
		decoder->m_nSurfaceIndex = index;
        QueryPerformanceCounter(&decoder->lastTextureUpdateTime);
	}
	return &decoder->m_timeStamp; // Picture identifier, our libvlc will set this value to picture timestamp! 
} 

// VLC just rendered a video frame. 
static void unlock(void *data, void *id, void *const *p_pixels) 
{ 
	if(*p_pixels == NULL)
		return;
	VLCDecoder* decoder=(VLCDecoder*)data;
	IVideoDecoder::BufferType type = decoder->GetBufferType();
	if (type == IVideoDecoder::D3D9_SURFACE)
	{
		decoder->UnlockSurface(decoder->m_nSurfaceIndex);
		IMessagePutter<SurfaceData>* pPutter = decoder->GetFramePutter2();
		pPutter->PutAsyncMessage(SurfaceData(decoder->m_nSurfaceIndex, decoder->GetVideoOutWidth(), decoder->GetVideoOutHeight(), decoder->GetPitchSize(), decoder->m_timeStamp));
	}
	else
	{
		IMessagePutter<FrameData>* pPutter = decoder->GetFramePutter();
		pPutter->PutAsyncMessage(FrameData(decoder->m_pUserTempData, decoder->GetVideoOutWidth(), decoder->GetVideoOutHeight(), decoder->GetPitchSize(), decoder->m_timeStamp));
		decoder->m_pUserTempData.Release();
	}
	
}

static unsigned video_format_callback(void **opaque, char *chroma,
	unsigned *width, unsigned *height,
	unsigned *pitches,
	unsigned *lines)
{
	VLCDecoder* decoder=(VLCDecoder*)*opaque;
	DWORD bufferFmt = decoder->GetBufferFmt();
	std::string fourcc = FourccHelp::toString(bufferFmt);
	if (fourcc == "")
		return 0;  //failed!
	memcpy(chroma, fourcc.c_str(),4);
	if (*height == 1088)
		*height = 1080;
	int outWith,outHeight;
	outWith = decoder->GetVideoOutWidth();
	outHeight = decoder->GetVideoOutHeight();
	if(!(outWith && outHeight))
	{
		decoder->SetVideoSize(*width,*height);
		decoder->SetOutSize(*width,*height);
	}
	else
	{
		*width = outWith;
		*height = outHeight;
		decoder->SetVideoSize(*width,*height);
	}

	decoder->InitPool();

	int bufferPitch = decoder->GetPitchSize();
	switch (bufferFmt)
	{
		case MAKEFOURCC('N', 'V', '1', '2'):
		{
			//two planners
			*pitches = bufferPitch;
			*(pitches + 1) = bufferPitch;
			*lines = *height;
			*(lines + 1) = *height / 2;
		}
		break;
		case MAKEFOURCC('I', '4', '2', '0'):
		{
			//three planners
			*pitches = bufferPitch;
			*(pitches + 1) = bufferPitch / 2;
			*(pitches + 2) = bufferPitch / 2;
			*lines = *height;
			*(lines + 1) = *height / 2;
			*(lines + 2) = *height / 2;
		}
		break;
		case MAKEFOURCC('Y', 'U', 'Y', '2'):
		case D3DFMT_X8R8G8B8:
		{
			//just one planner
			*pitches = bufferPitch;
			*lines = *height;
		}
			break;
		default:
			return 0;
	}
	return 1;  //succeed
}

// VLC wants to display a video frame. 
//static void display(void *data, void *id) 
//{ 
//} 

VLCDecoder::VLCDecoder(BufferType type):IVideoDecoder(type)
{
	m_pInstance = NULL;
	m_pMedia = NULL;
	m_pPlayer = NULL;
	m_bDecodeRun = false;
	m_nUdpCacheTime = 200;
	m_timeStamp = 0;
	m_mode = MEMORY_CALL_BACK;
	m_window = NULL;
	m_nSurfaceIndex = -1;
}

VLCDecoder::VLCDecoder():IVideoDecoder(IVideoDecoder::D3D9_SURFACE)
{
	m_pInstance = NULL;
	m_pMedia = NULL;
	m_pPlayer = NULL;
	m_bDecodeRun = false;
	m_nUdpCacheTime = 200;
	m_timeStamp = 0;
	m_mode = MEMORY_CALL_BACK;
	m_window = NULL;
	m_nSurfaceIndex = -1;
}

VLCDecoder::~VLCDecoder()
{
	Release();
}

void VLCDecoder::SetRunMode(VLCRunMode mode, HANDLE hDrawWindow/* = NULL*/)
{
	if (mode != MEMORY_CALL_BACK && mode != WINDOW_DIRECT_DRAW)
		return;
	else if (mode == WINDOW_DIRECT_DRAW && !hDrawWindow)
		return;
	else
	{
		m_mode = mode;
		m_window = hDrawWindow;
	}
}

bool VLCDecoder::Init()
{

    Release();

	if(m_strURL.empty())
	{
		return false;
	}
	// If you don't have this variable set you must have plugins directory 
	// with the executable or libvlc_new() will not work! 
	//printf("VLC_PLUGIN_PATH=%s\n", getenv("VLC_PLUGIN_PATH")); 
	char const *vlc_argv[] = 
	{ 
		
		//"--no-audio", // Don't play audio. 
		"--no-xlib", // Don't use Xlib. 
		// Apply a video filter. 
		//"--video-filter", "sepia", 
		//"--sepia-intensity=200" 
	};
	int vlc_argc = sizeof(vlc_argv) / sizeof(*vlc_argv); 
	m_pInstance= libvlc_new(vlc_argc, vlc_argv); 
	if(NULL == m_pInstance) 
	{ 
		printf("LibVLC initialization failure.\n"); 
		return false; 
	} 
	if(IsNetworkSource(m_strURL))
	{
		m_pMedia = libvlc_media_new_location(m_pInstance,m_strURL.c_str());
		if(m_strURL.find("udp://") != std::string::npos ||//is udp stream
           m_strURL.find("rtsp://") != std::string::npos )//is rtsp stream
		{
			//char szCacheTime[128];
			//sprintf(szCacheTime,"network-caching=%d",m_nUdpCacheTime);
			//libvlc_media_add_option(m_pMedia,szCacheTime);  //our lib, no need cacheTime
			libvlc_media_add_option(m_pMedia, "avcodec-threads=1");
		}	
	}
	else
	{
		m_pMedia = libvlc_media_new_path(m_pInstance, m_strURL.c_str()); 
		libvlc_media_track_t** pTrackInfo=NULL;
		libvlc_media_parse(m_pMedia);

		unsigned int trackCount=libvlc_media_tracks_get(m_pMedia,&pTrackInfo);
		if(!ParseVideoInfo(pTrackInfo,trackCount))
		{
			//return false;
		}
	}


	m_pPlayer = libvlc_media_player_new_from_media(m_pMedia); 
	libvlc_media_release(m_pMedia); 
	m_pMedia=NULL;

	if (m_mode == WINDOW_DIRECT_DRAW && m_window != NULL)
	{
		libvlc_media_player_set_hwnd(m_pPlayer, m_window);
		/* Disable mouse and keyboard events */
		libvlc_video_set_key_input(m_pPlayer, false);
		libvlc_video_set_mouse_input(m_pPlayer, false);
	}
	else
	{
		libvlc_video_set_callbacks(m_pPlayer, lock, unlock, NULL, this);
		//libvlc_video_set_format(m_pPlayer, m_strFourCC.c_str(), m_nOutWidth, m_nOutHeight, m_nPitchSize);
		libvlc_video_set_format_callbacks(m_pPlayer, video_format_callback, NULL);
	}


	return true;
}
bool VLCDecoder::IsNetworkSource(const std::string& url)
{
	std::string lowerUrl(url.length()+1,'\0');
	std::transform(url.begin(),url.end(),lowerUrl.begin(),tolower);
	if(lowerUrl.find("rtsp://") != std::string::npos)
		return true;
	if(lowerUrl.find("udp://") != std::string::npos)
		return true;
	if(lowerUrl.find("http://") != std::string::npos)
		return true;
	if(lowerUrl.find("mms://") != std::string::npos)
		return true;
	if(lowerUrl.find("rtp://") != std::string::npos)
		return true;
	if(lowerUrl.find("tcp://") != std::string::npos)
		return true;
	return false;
}
bool VLCDecoder::ParseVideoInfo(libvlc_media_track_t** pTrackInfo,int trackCount)
{
	for(int i=0;i<trackCount;++i)
	{
		libvlc_media_track_t* track=*(pTrackInfo+i);
		if(track->i_type == libvlc_track_video)
		{
			m_nFrameRateDen=track->video->i_frame_rate_den;
			m_nFrameRateNum=track->video->i_frame_rate_num;
			return true;
		}
		if(track->i_type == libvlc_track_audio)
		{
			//printf("audio,chanel=%d,rate=%d\n",track->audio->i_channels,track->audio->i_rate);
		}

	}
	return false;
}
bool VLCDecoder::Start()
{
	if(!m_pPlayer)
	{
		return false;
	}
	if(m_bDecodeRun)
	{
		Stop();
	}
	if(libvlc_media_player_play(m_pPlayer)==0)
	{
		m_bDecodeRun=true;
		return true;
	}
	return false;
}
void VLCDecoder::Stop()
{
	if(m_pPlayer && m_bDecodeRun)
	{
		libvlc_media_player_stop(m_pPlayer);
		m_bDecodeRun=false;
	}
	
}
void VLCDecoder::Release()
{
	Stop();
	if(m_pMedia)
	{
		libvlc_media_release(m_pMedia);
		m_pMedia=NULL;
	}
	if(m_pPlayer)
	{
		libvlc_media_player_release(m_pPlayer); 
		m_pPlayer=NULL;
	}
	if(m_pInstance)
	{
		libvlc_release(m_pInstance); 
		m_pInstance=NULL;
	}
	
}

bool VLCDecoder::SetVolume(int volume)
{
    if(m_pPlayer)
    {
        int res = -1;
        res = libvlc_audio_set_volume(m_pPlayer,volume);  //return 0 if the volume is set,or -1;
        return 0 == res;
    }
    else 
        return false;
}

IVideoDecoder::BufferType VLCDecoder::WhichPoolType()
{
	IDirect3D9* pD3D9 = 0;
	HRESULT hr = S_OK;
	pD3D9 = Direct3DCreate9(D3D_SDK_VERSION);
	if (!pD3D9)
	{
		hr = E_FAIL;
		return IVideoDecoder::D3D9_SURFACE;
	}
	IVideoDecoder::BufferType res = IVideoDecoder::D3D9_SURFACE;

	UINT number = pD3D9->GetAdapterCount();

	D3DADAPTER_IDENTIFIER9 identifier;
	memset(&identifier, 0, sizeof(identifier));
	hr = pD3D9->GetAdapterIdentifier(D3DADAPTER_DEFAULT, 0, &identifier);
	if (hr == S_OK)
	{
		if (identifier.VendorId == 0x5333)  //our graphics card
		{
			res = IVideoDecoder::D3D9_SURFACE;
		}
		else
			res = IVideoDecoder::NORMAL_BUFFER;
	}

	if (pD3D9)
		pD3D9->Release();
	return res;
}