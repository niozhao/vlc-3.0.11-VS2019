/*******************************************************************************
Copyright (c) 2007-2012, Kazuhiro Mogi <kazhiro@marumo.ne.jp>
Other copyright: see committers list

This software is released under the ISC Licence terms

Permission to use, copy, modify, and/or distribute this software for any purpose
with or without fee is hereby granted, provided that the above copyright notice
and this permission notice appear in all copies.

THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH
REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND
FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT,
INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR
OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
PERFORMANCE OF THIS SOFTWARE.
*******************************************************************************/
#ifndef ARIBB25API_H
#define ARIBB25API_H 1 

/* If building or using aribb25 as a DLL, define ARIBB25_DLL.
 *  */
/* TODO: define ARIBB25_BUILD_DLL when building this library as DLL.
 *  */
#if defined _WIN32 || defined __CYGWIN__
  #ifdef ARIBB25_DLL
    #ifdef ARIBB25_BUILD_DLL
      #ifdef __GNUC__
        #define ARIBB25API __attribute__ ((dllexport))
      #else
        #define ARIBB25API extern __declspec(dllexport)
      #endif
    #else
      #ifdef __GNUC__
        #define ARIBB25API __attribute__ ((dllimport))
      #else
        #define ARIBB25API extern __declspec(dllimport)
      #endif
    #endif
  #else
    #if __GNUC__ >= 4
      #define ARIBB25API __attribute__ ((visibility ("default")))
    #else
      #define ARIBB25API extern
    #endif
  #endif
  #define DLL_LOCAL
#else
  #if __GNUC__ >= 4
    #define ARIBB25API __attribute__ ((visibility ("default")))
  #else
    #define ARIBB25API extern
  #endif
#endif

#endif
