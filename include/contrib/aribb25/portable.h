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
#ifndef PORTABLE_H
#define PORTABLE_H

#include <stdint.h>

#if !defined(WIN32)
	#define _open  open
	#define _close close
	#define _read  read
	#define _write write
	#define _lseeki64 lseek
	#define _telli64(fd)  (lseek(fd,0,SEEK_CUR))
	#define _O_BINARY     (0)
	#define _O_RDONLY     (O_RDONLY)
	#define _O_WRONLY     (O_WRONLY)
	#define _O_SEQUENTIAL (0)
	#define _O_CREAT      (O_CREAT)
	#define _O_TRUNC      (O_TRUNC)
	#define _S_IREAD      (S_IRUSR|S_IRGRP|S_IROTH)
	#define _S_IWRITE     (S_IWUSR|S_IWGRP|S_IWOTH)
#endif

#endif /* PORTABLE_H */
