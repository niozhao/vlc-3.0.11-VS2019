#pragma once


class SurfaceData
{
public:
	int m_nIndex;
	int pitch;
	int width, height;
	int64_t timeStamp;
	SurfaceData()
	{
		this->m_nIndex = -1;
		this->pitch = 0;
		this->width = 0;
		this->height = 0;
		this->timeStamp = 0;
	}
	SurfaceData(int index, int width, int height, int pitch, int64_t time)
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