#include <cassert>
#include "CritSection.h"
#include "BufferPool.h"

class BufferPoolImpl
{
public:
	BufferPoolImpl();
	~BufferPoolImpl();
	void Add(const Buffer& buffer);
	void Recycle(Buffer* pBuffer);
	void Release();
	Buffer GetBuffer();
	int GetBufferSize();
private:
	ThreadSection		m_QueueLocker;
	std::queue<Buffer>	m_ValidQueue;
	bool				m_bReleasing;
};

void::Buffer::Release()
{
	if(m_nSize && m_pData.get() && m_pOwnerPool.get())
	{
		m_pOwnerPool->Recycle(this);
	}
	m_nSize = 0;
	m_pData.reset();
	m_pOwnerPool.reset();
}
BufferPool::BufferPool()
{
	m_pBufferPoolImpl.reset(new BufferPoolImpl);
	m_bInited=false;
}
BufferPool::~BufferPool()
{
	Release();
}
bool BufferPool::Init(int bufferSize,int bufferCount,AllocFunc alloc /*= ::malloc*/,DeallocFunc dealloc /*= ::free*/)
{
	if(m_bInited)
	{
		return true;
	}
	int realBufferCount = 0;
	for(int i=0;i<bufferCount;++i)
	{
		char* temp=(char*)alloc(bufferSize*sizeof(char));
		if(temp != NULL)
		{
			m_pBufferPoolImpl->Add(Buffer(std::tr1::shared_ptr<char>(temp,dealloc),bufferSize,m_pBufferPoolImpl));
			++realBufferCount;
		}
	}
	assert((realBufferCount > 0) && "BufferPool is empty");
	m_bInited=true;
	return true;
}

void BufferPool::Release()
{
	if(m_pBufferPoolImpl.get())
	{
		m_pBufferPoolImpl->Release();
	}
	m_pBufferPoolImpl.reset(new BufferPoolImpl);
	m_bInited=false;
}
Buffer BufferPool::GetBuffer()
{
	assert(m_pBufferPoolImpl.get());
	return m_pBufferPoolImpl->GetBuffer();
}

int BufferPool::GetBufferSize()
{
	return m_pBufferPoolImpl->GetBufferSize();
}

BufferPoolImpl::BufferPoolImpl()
{
	m_bReleasing=false;
}
BufferPoolImpl::~BufferPoolImpl()
{
	Release();
}
void BufferPoolImpl::Add(const Buffer& buffer)
{
	m_QueueLocker.Lock();
	m_ValidQueue.push(buffer);
	m_QueueLocker.Unlock();
}
void BufferPoolImpl::Recycle(Buffer* pBuffer)
{
	if(m_bReleasing)
	{
		return;
	}
	m_QueueLocker.Lock();
	if(!m_bReleasing && pBuffer->m_pData.use_count() == 1)
	{
		m_ValidQueue.push(*pBuffer);
	}
	pBuffer->m_pData.reset();
	m_QueueLocker.Unlock();
}
void BufferPoolImpl::Release()
{
	m_QueueLocker.Lock();
	m_bReleasing=true;			//mark not recycle
	while(!m_ValidQueue.empty())//pop to decrease reference,otherwise it will result in memory leak
	{
		m_ValidQueue.pop();
	}
	m_QueueLocker.Unlock();
}
Buffer BufferPoolImpl::GetBuffer()
{
	Buffer temp;
	m_QueueLocker.Lock();
	if(m_ValidQueue.empty())
	{
		m_QueueLocker.Unlock();
		return temp;
	}
	temp=m_ValidQueue.front();
	m_ValidQueue.pop();
	m_QueueLocker.Unlock();
	return temp;
}

int BufferPoolImpl::GetBufferSize()
{
	return m_ValidQueue.size();
}