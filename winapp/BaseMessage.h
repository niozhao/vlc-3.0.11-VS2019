#pragma once

#include <tchar.h>
#include <cassert>
#include <string>
#include <queue>
#include <functional>
#include "CritSection.h"
namespace std
{
	typedef basic_string<TCHAR> tstring;
}

//typedef std::string xstring;//xstring could be other type which is better
typedef std::function<bool()> GetCondition;

//edit by kelsey for tablecharacter
enum MessageCategory{UNKNOWN=-1,RESPONSE,NOTIFICATION, REQUEST};
//end
template<class T>
class IMessageGetter
{
public:
	virtual bool GetAsyncMessage(T* pMessage) = 0;
};

template<class T>
class IConditionMessageGetter
{
public:
	virtual bool GetAsyncMessage(T* pMessage,GetCondition condition) = 0;
};

template<class T>
class IMessagePutter
{
public:
	virtual void PutAsyncMessage(const T& message) = 0;
};

template<class T>
class BlockQueue:public IMessagePutter<T>,public IMessageGetter<T>
{
public:
	BlockQueue(unsigned int timeOut = 100)
	{
		m_nTimeOut = timeOut;
		m_hEvent=::CreateEvent(NULL,TRUE,FALSE,NULL);
	}
	virtual ~BlockQueue()
	{
		::CloseHandle(m_hEvent);
	}
	virtual bool GetAsyncMessage(T* pMessage)
	{
		assert(pMessage);
		::WaitForSingleObject(m_hEvent,m_nTimeOut);
		AutoThreadSection locker(&m_queueLocker);
		if(!m_messageQeque.size())
		{
			::ResetEvent(m_hEvent);
			return false;
		}
		*pMessage = m_messageQeque.front();
		m_messageQeque.pop();
		return true;
	}

    virtual bool CheckAsyncMessage(T* pMessage)
    {
        assert(pMessage);
        ::WaitForSingleObject(m_hEvent,m_nTimeOut);
        AutoThreadSection locker(&m_queueLocker);
        if(!m_messageQeque.size())
        {
            ::ResetEvent(m_hEvent);
            return false;
        }
        *pMessage = m_messageQeque.front();
        return true;
    }
	virtual void PutAsyncMessage(const T& message)
	{
		AutoThreadSection locker(&m_queueLocker);
		m_messageQeque.push(message);
		if(m_messageQeque.size() >= 1)
		{
			::SetEvent(m_hEvent);
		}
	}

	virtual int queezeSize()
	{
		AutoThreadSection locker(&m_queueLocker);
		return m_messageQeque.size();
	}

	void ClearQueue()
	{
		AutoThreadSection locker(&m_queueLocker);
		while(m_messageQeque.size())
		{
			m_messageQeque.pop();
		}
	}
private:
	HANDLE			m_hEvent;
	ThreadSection	m_queueLocker;
	std::queue<T>	m_messageQeque;
	unsigned int	m_nTimeOut;
};

template<class T>
class NonBlockQueue:public IMessagePutter<T>,public IMessageGetter<T>
{
public:
	NonBlockQueue()
	{
		
	}
	virtual ~NonBlockQueue()
	{
		
	}
	virtual bool GetAsyncMessage(T* pMessage)
	{
		AutoThreadSection locker(&m_queueLocker);
		if(!m_messageQeque.size())
		{
			return false;
		}
		*pMessage = m_messageQeque.front();
		m_messageQeque.pop();
		return true;
	}
	virtual void PutAsyncMessage(const T& message)
	{
		AutoThreadSection locker(&m_queueLocker);
		m_messageQeque.push(message);
	}
	size_t Size()const
	{
		AutoThreadSection locker(&m_queueLocker);
		return m_messageQeque.size();
	}
protected:
	ThreadSection	m_queueLocker;
	std::queue<T>	m_messageQeque;
};
