/**********
This library is free software; you can redistribute it and/or modify it under
the terms of the GNU Lesser General Public License as published by the
Free Software Foundation; either version 3 of the License, or (at your
option) any later version. (See <http://www.gnu.org/copyleft/lesser.html>.)

This library is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General Public License
along with this library; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
**********/
// Copyright (c) 1996-2017 Live Networks, Inc.  All rights reserved.
// Usage Environment
// Implementation

#include "UsageEnvironment.hh"

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#ifdef WIN32
#include <windows.h>
#elif __ANDROID__
#include <android/log.h>
#define  LOG_TAG    "LIVE555"
#endif

Boolean UsageEnvironment::reclaim() {
  // We delete ourselves only if we have no remainining state:
  if (liveMediaPriv == NULL && groupsockPriv == NULL) {
    delete this;
    return True;
  }

  return False;
}

UsageEnvironment::UsageEnvironment(TaskScheduler& scheduler)
  : liveMediaPriv(NULL), groupsockPriv(NULL), fScheduler(scheduler) {
}

UsageEnvironment::~UsageEnvironment() {
}

void UsageEnvironment::log(char const* format, ...) 
{
	va_list vlArgs;
	va_start(vlArgs, format);
#ifdef WIN32
	char strBuffer[4096] = { 0 };
	_vsnprintf(strBuffer, sizeof(strBuffer) - 1, format, vlArgs);
	OutputDebugStringA(strBuffer);
#elif __ANDROID__
	__android_log_vprint(ANDROID_LOG_INFO, LOG_TAG, format, vlArgs);
#endif
	va_end(vlArgs);
}

char const* UsageEnvironment::format(const char* format, ...)
{
	const int bufferSize = 1024;
	char* strBuffer = new char[bufferSize];
	memset(strBuffer, 0, bufferSize);
	va_list vlArgs;
	va_start(vlArgs, format);
#ifdef WIN32
	_vsnprintf(strBuffer, bufferSize - 1, format, vlArgs);
#elif __ANDROID__
	snprintf(strBuffer, bufferSize - 1, format, vlArgs);
#endif
	va_end(vlArgs);
	return strBuffer;
}


// By default, we handle 'should not occur'-type library errors by calling abort().  Subclasses can redefine this, if desired.
// (If your runtime library doesn't define the "abort()" function, then define your own (e.g., that does nothing).)
void UsageEnvironment::internalError() {
  abort();
}


TaskScheduler::TaskScheduler() {
}

TaskScheduler::~TaskScheduler() {
}

void TaskScheduler::rescheduleDelayedTask(TaskToken& task,
					  int64_t microseconds, TaskFunc* proc,
					  void* clientData) {
  unscheduleDelayedTask(task);
  task = scheduleDelayedTask(microseconds, proc, clientData);
}

// By default, we handle 'should not occur'-type library errors by calling abort().  Subclasses can redefine this, if desired.
void TaskScheduler::internalError() {
  abort();
}
