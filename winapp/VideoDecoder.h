#pragma once
#include <string>
#include "Interface.h"
#include "BaseMessage.h"
#include "SurfacePool.h"
#include "FourccHelp.h"

class IVideoDecoder
{
public:
	enum BufferType{
		NORMAL_BUFFER,
		D3D9_SURFACE
	};
	IVideoDecoder(BufferType type)
	{
		m_pFramePutter2 = NULL;
		m_pFramePutter=NULL;
		m_strURL="";
		m_nOutWidth=m_nOutHeight=0;
		m_nVideoWidth=m_nVideoHeight=0;
		m_nFrameRateDen=m_nFrameRateNum=0;
		m_nVideoBufferCount = 4;
		m_bufferType = type;
		m_bufferFmt = D3DFMT_X8R8G8B8;
	}
	virtual ~IVideoDecoder()
	{
		
	}
	virtual bool Init()=0;

	virtual void Release()=0;

	virtual bool Start()=0;
	virtual void Stop()=0;
	void SetPlayUrl(const std::string& url)
	{
		m_strURL=url;
	}

	void SetBufferType(BufferType type)
	{
		m_bufferType = type;
	}

	BufferType GetBufferType()
	{
		return m_bufferType;
	}

	Buffer GetBuffer()
	{
		return m_VideoBufferPool.GetBuffer();
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

	void SetDevice(IDirect3DDevice9* device)
	{
		m_surfacePool.SetDevice(device);
	}

	void SetFramePutter(IMessagePutter<FrameData>* putter)
	{
		m_pFramePutter=putter;
	}
	void SetFramePutter(IMessagePutter<SurfaceData>* putter)
	{
		m_pFramePutter2 = putter;
	}
	IMessagePutter<FrameData>* GetFramePutter()
	{
		return m_pFramePutter;
	}
	IMessagePutter<SurfaceData>* GetFramePutter2()
	{
		return m_pFramePutter2;
	}

	int GetVideoWidth()const
	{
		return m_nVideoWidth;
	}
	int GetVideoHeight()const
	{
		return m_nVideoHeight;
	}
	void SetVideoSize(int width,int height)
	{
		m_nVideoWidth = width;
		m_nVideoHeight = height;
	}
	void SetOutSize(int width,int height)
	{
		m_nOutWidth = width;
		m_nOutHeight = height;
	}
	int GetVideoOutWidth()const
	{
		return m_nOutWidth;
	}
	int GetVideoOutHeight()const
	{
		return m_nOutHeight;
	}
	int GetPitchSize()
	{
		if (m_bufferType == D3D9_SURFACE)
			return m_surfacePool.getSurfacePitch();
		else
		{
			switch (m_bufferFmt)
			{
			case MAKEFOURCC('N', 'V', '1', '2'):
			case MAKEFOURCC('I', '4', '2', '0'):
				return m_nVideoWidth;
			case MAKEFOURCC('Y', 'U', 'Y', '2'):
				return m_nVideoWidth * 2;
			case D3DFMT_X8R8G8B8:
				return m_nVideoWidth * 4;
			}
			return 0;  //error, add for you self!!
		}
	}
	int GetFrameRateDen()const
	{
		return m_nFrameRateDen;
	}
	int GetFrameRateNum()const
	{
		return m_nFrameRateNum;
	}
	void SetBufferFmt(DWORD chroma)
	{
		m_bufferFmt = chroma;
	}
	DWORD GetBufferFmt() 
	{
		return m_bufferFmt;
	}
	void SetVideoBufferCount(int count)
	{
		m_nVideoBufferCount=count;
	}
	void InitPool()
	{
		if(m_bufferType == D3D9_SURFACE)
			m_surfacePool.Init(m_nVideoWidth, m_nVideoHeight, (D3DFORMAT)m_bufferFmt);
		else
		{
			m_VideoBufferPool.Release();
			m_VideoBufferPool.Init(m_nVideoWidth * m_nVideoHeight * FourccHelp::bitsPerPix(m_bufferFmt) / 8, m_nVideoBufferCount);
		}
	}

protected:

	std::string m_strURL;
	IMessagePutter<FrameData>* m_pFramePutter;
	IMessagePutter<SurfaceData>* m_pFramePutter2;
	int m_nVideoWidth,m_nVideoHeight;
	int m_nOutWidth,m_nOutHeight;
	int m_nFrameRateDen,m_nFrameRateNum;//FrameRate=m_nFrameRateNum/m_nFrameRateDen
	int m_nVideoBufferCount;
	BufferPool	m_VideoBufferPool;
	SurfacePool m_surfacePool;
	DWORD m_bufferFmt;
	BufferType m_bufferType;
};