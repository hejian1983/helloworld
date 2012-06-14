#pragma once

#ifdef _MSC_VER
#include <windows.h>
#else
#include <pthread.h>
#endif
#include "dfix.h"

namespace DFIX
{
#define UNIDATA_READLOCK(X)	\
	DFIX::ThreadRWMutex::Instance().AcquireRead();	\
	DFIX::ThreadRWMutexGuard X(&DFIX::ThreadRWMutex::Instance());
	
#define UNIDATA_WRITELOCK(X)	\
	DFIX::ThreadRWMutex::Instance().AcquireWrite();	\
	DFIX::ThreadRWMutexGuard X(&DFIX::ThreadRWMutex::Instance());

#define UNIDATA_UNLOCK(X)	\
	X.Unable();\
	DFIX::ThreadRWMutex::Instance().Release();

	class DATAUNIT_CLASS ThreadRWMutex
	{
	public:
		ThreadRWMutex();
		~ThreadRWMutex();
		void AcquireRead();
		void AcquireWrite();
		void Release();
		static ThreadRWMutex& Instance()
		{
			static ThreadRWMutex mutex;
			return mutex;
		}
	private:
		#ifdef _MSC_VER
			CRITICAL_SECTION m_rwmutex;
		#else
			pthread_rwlock_t m_rwmutex;
		#endif
	};
	class DATAUNIT_CLASS ThreadRWMutexGuard
	{
	public:
		ThreadRWMutexGuard(ThreadRWMutex *mutex) : m_mutex(mutex),m_flag(true)
		{}
		~ThreadRWMutexGuard(){
			if(m_flag)
				m_mutex->Release();
		}
		inline void Unable(){
			m_flag = false;
		}
	private:
		ThreadRWMutex *m_mutex;
		bool m_flag;
	};
}

