/*****************************************************************************
 * gettimeofday.c: gettimeofday() replacement
 *****************************************************************************
 * Copyright © 2014 VLC authors and VideoLAN
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#ifdef _WIN32
#include <winsock2.h>


//performance compare:
//test call function 100*10000:
//gettimeofday_old() cost 150ms
//gettimeofday() cost 100ms



/* FILETIME of Jan 1 1970 00:00:00. */
static const unsigned __int64 epoch = 116444736000000000;

/*
 * timezone information is stored outside the kernel so tzp isn't used anymore.
 *
 * Note: this function is not for Win32 high precision timing purpose. See
 * elapsed_time().
 */
int gettimeofday_old(struct timeval * tp, struct timezone * tzp)
{
    (void)tzp;
    FILETIME       file_time;
    SYSTEMTIME     system_time;
    ULARGE_INTEGER ularge;

    GetSystemTime(&system_time);
    SystemTimeToFileTime(&system_time, &file_time);
    ularge.LowPart  = file_time.dwLowDateTime;
    ularge.HighPart = file_time.dwHighDateTime;

    tp->tv_sec  = (long) ((ularge.QuadPart - epoch) / 10000000L);
    tp->tv_usec = (long) (system_time.wMilliseconds * 1000);

    return 0;
}


//the implement of gettimeofday is copy from live555 GroupsockHelp.cpp
// used to make sure that static variables in gettimeofday() aren't initialized simultaneously by multiple threads
static LONG initializeLock_gettimeofday_ = 0;

#if !defined(_WIN32_WCE)
#include <sys/timeb.h>
#endif

int gettimeofday(struct timeval* tp, struct timezone* tzp ) {
    static LARGE_INTEGER tickFrequency, epochOffset;

    static BOOL isInitialized = FALSE;

    LARGE_INTEGER tickNow;

#if !defined(_WIN32_WCE)
    QueryPerformanceCounter(&tickNow);
#else
    tickNow.QuadPart = GetTickCount();
#endif

    if (!isInitialized) {
        if (1 == InterlockedIncrement(&initializeLock_gettimeofday_)) {
#if !defined(_WIN32_WCE)
            // For our first call, use "ftime()", so that we get a time with a proper epoch.
            // For subsequent calls, use "QueryPerformanceCount()", because it's more fine-grain.
            struct timeb tb;
            ftime(&tb);
            tp->tv_sec = tb.time;
            tp->tv_usec = 1000 * tb.millitm;

            // Also get our counter frequency:
            QueryPerformanceFrequency(&tickFrequency);
#else
            /* FILETIME of Jan 1 1970 00:00:00. */
            const LONGLONG epoch = 116444736000000000LL;
            FILETIME fileTime;
            LARGE_INTEGER time;
            GetSystemTimeAsFileTime(&fileTime);

            time.HighPart = fileTime.dwHighDateTime;
            time.LowPart = fileTime.dwLowDateTime;

            // convert to from 100ns time to unix timestamp in seconds, 1000*1000*10
            tp->tv_sec = (long)((time.QuadPart - epoch) / 10000000L);

            /*
              GetSystemTimeAsFileTime has just a seconds resolution,
              thats why wince-version of gettimeofday is not 100% accurate, usec accuracy would be calculated like this:
              // convert 100 nanoseconds to usec
              tp->tv_usec= (long)((time.QuadPart - epoch)%10000000L) / 10L;
            */
            tp->tv_usec = 0;

            // resolution of GetTickCounter() is always milliseconds
            tickFrequency.QuadPart = 1000;
#endif     
            // compute an offset to add to subsequent counter times, so we get a proper epoch:
            epochOffset.QuadPart
                = tp->tv_sec * tickFrequency.QuadPart + (tp->tv_usec * tickFrequency.QuadPart) / 1000000L - tickNow.QuadPart;

            // next caller can use ticks for time calculation
            isInitialized = TRUE;
            return 0;
        }
        else {
            InterlockedDecrement(&initializeLock_gettimeofday_);
            // wait until first caller has initialized static values
            while (!isInitialized) {
                Sleep(1);
            }
        }
    }

    // adjust our tick count so that we get a proper epoch:
    tickNow.QuadPart += epochOffset.QuadPart;

    tp->tv_sec = (long)(tickNow.QuadPart / tickFrequency.QuadPart);
    tp->tv_usec = (long)(((tickNow.QuadPart % tickFrequency.QuadPart) * 1000000L) / tickFrequency.QuadPart);

    return 0;
}


#include <stdint.h>   //for INT64_C;
__int64 gettimecount()
{
    struct timeval tp;
    gettimeofday(&tp, NULL);
	return (__int64)tp.tv_sec * INT64_C(1000000) +
		(__int64)tp.tv_usec;
}

#endif /* _WIN32 */
