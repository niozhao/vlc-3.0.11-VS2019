#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include <assert.h>

#define PFORMAT_TO_FILE     0x2000
#define PFORMAT_NOLIMIT     0x4000

/*
* add this function, so some plugin no need include mingwex.a anymore
*/
int __mingw_vfprintf(FILE* stream, const char* fmt, va_list argv)
{
	register int retval;

	_lock_file(stream);
	retval = __stdio_common_vfprintf(PFORMAT_TO_FILE | PFORMAT_NOLIMIT, stream, fmt, NULL, argv);
	_unlock_file(stream);

	return retval;
}