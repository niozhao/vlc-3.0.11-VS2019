#pragma once
#include "stdint.h"
#include "BufferPool.h"
class FrameData
{
public:
	Buffer buffer;
	int pitch;
	int width,height;
	int64_t timeStamp;
	FrameData()
	{
		pitch=0;
		width=height=0;
		timeStamp = 0;
	}
	FrameData(Buffer& buf,int width,int height,int pitch, int64_t timeStamp)
	{
		buffer=buf;
		this->pitch=pitch;
		this->width=width;
		this->height=height;
		this->timeStamp = timeStamp;
	}
	~FrameData()
	{
		buffer.Release();
	}
	bool IsValid()const
	{
		return (buffer.IsValid())&&pitch&&width&&height;
	}
	void InitData(Buffer& buf,int width,int height,int pitch, int64_t timeStamp)
	{
		this->buffer=buf;
		this->pitch=pitch;
		this->width=width;
		this->height=height;
		this->timeStamp = timeStamp;
	}
};

class IFrameDataGetter
{
public:
	virtual FrameData GetFrameData()=0;
};
class IFrameDataPutter
{
public:
	virtual bool PutFrameData(const FrameData& frame)=0;
};

