#pragma once

#include <cstddef>
#include <queue>
#include <memory>
#include <stdlib.h>
#include "CritSection.h"

class BufferPool;
class BufferPoolImpl;
class Buffer
{
	friend class BufferPool;
	friend class BufferPoolImpl;
public:
	Buffer()
	{
		m_nSize = 0;
		m_pData.reset();
		m_pOwnerPool.reset();
	}
	~Buffer()
	{
		Release();
	}
	Buffer::Buffer(const Buffer& other)
	{
		m_nSize=other.m_nSize;
		m_pData=other.m_pData;
		m_pOwnerPool=other.m_pOwnerPool;
	}
	Buffer& operator=(const Buffer& other)
	{
		if(this == &other)
			return *this;
		Release();
		m_nSize=other.m_nSize;
		m_pData=other.m_pData;
		m_pOwnerPool=other.m_pOwnerPool;
		return *this;
	}
	const char* GetBuffer()const
	{
		return m_pData.get();
	}
	char* GetBuffer()
	{
		return m_pData.get();
	}
	int GetSize()const
	{
		return m_nSize;
	}
	bool IsValid()const
	{
		return (m_pData.get() != NULL && m_nSize != 0);
	}
	void Release();
private:
	Buffer(std::tr1::shared_ptr<char> pBuf,int bufferSize,std::tr1::shared_ptr<BufferPoolImpl>& pPool)
	{
		m_pData=pBuf;
		m_nSize = bufferSize;
		m_pOwnerPool=pPool;
	}
	std::tr1::shared_ptr<char>				m_pData;
	int										m_nSize;
	std::tr1::shared_ptr<BufferPoolImpl>	m_pOwnerPool;
};

class BufferPool
{
public:
	typedef void*(*AllocFunc)(size_t);
	typedef void(*DeallocFunc)(void*);
	BufferPool();
	~BufferPool();
	bool Init(int bufferSize,int bufferCount,AllocFunc alloc = ::malloc,DeallocFunc dealloc = ::free);
	void Release();
	Buffer GetBuffer();
	int GetBufferSize();
private:
	std::tr1::shared_ptr<BufferPoolImpl> m_pBufferPoolImpl;
	bool m_bInited;
};
