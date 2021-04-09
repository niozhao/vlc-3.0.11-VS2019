#ifndef CRITSECTION_H
#define CRITSECTION_H

class ThreadSection
{
public:
    ThreadSection()
    {
		Init();
    }

    ~ThreadSection()
    {
        DeleteCriticalSection(&m_CriticalSection);
    }

    bool Lock()
    {
        bool result = false;
        __try
        {
            EnterCriticalSection(&m_CriticalSection);
            result = true;
        }
        __except(STATUS_NO_MEMORY == GetExceptionCode())
        {
        }
        return result;
    }

    bool Unlock()
    {
        bool result = false;
        __try
        {
            LeaveCriticalSection(&m_CriticalSection);
            result = true;
        }
        __except(STATUS_NO_MEMORY == GetExceptionCode())
        {
        }
        return result;
    }

private:
    /// Initialize critical section
	// structured exception may be raised in low memory situations
    HRESULT Init() throw()
    {
        HRESULT hRes = E_FAIL;
        __try
        {
            InitializeCriticalSection(&m_CriticalSection);
            hRes = S_OK;
        }
        __except(STATUS_NO_MEMORY == GetExceptionCode())
        {
            hRes = E_OUTOFMEMORY;
        }
        return hRes;
    }

    ThreadSection(const ThreadSection & tSection);
    ThreadSection &operator=(const ThreadSection & tSection);
    CRITICAL_SECTION m_CriticalSection;
};


/**
 * AutoThreadSection class
 * Critical section auto-lock
 */
class AutoThreadSection
{
public:
    AutoThreadSection(__in ThreadSection* pSection)
    {
        m_pSection = pSection;
        m_pSection->Lock();
    }

    ~AutoThreadSection()
    {
        m_pSection->Unlock();
    }
private:
    AutoThreadSection(const AutoThreadSection & tSection);
    AutoThreadSection &operator=(const AutoThreadSection & tSection);
    ThreadSection * m_pSection;
};

#endif //CRITSECTION_H