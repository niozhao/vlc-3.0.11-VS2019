#pragma once


#include <queue>
#include "Interface.h"

class FrameQueue:public IFrameDataGetter,public IFrameDataPutter
{
protected:
	std::queue<FrameData> m_queue;
	ThreadSection m_QueueLocker;
	unsigned int m_nMaxSize;

public:
	FrameQueue(unsigned int maxSize=10)
	{
		m_nMaxSize=maxSize;
	}
	~FrameQueue()
	{
		Clear();
	}
	FrameData GetFrameData()
	{
		if(m_queue.empty())
		{
			return FrameData();
		}
		FrameData temp;
		m_QueueLocker.Lock();
		temp=m_queue.front();
		m_queue.pop();
		m_QueueLocker.Unlock();
		return temp;
	};
	bool PutFrameData(const FrameData& frame)
	{
		if(m_queue.size() >= m_nMaxSize)
		{
			return false;
		}
		m_QueueLocker.Lock();
		m_queue.push(frame);
		m_QueueLocker.Unlock();
		return true;
	}
	void Clear()
	{
		m_QueueLocker.Lock();
		while(!m_queue.empty())
		{
			m_queue.pop();
		}
		m_QueueLocker.Unlock();
	}
};

