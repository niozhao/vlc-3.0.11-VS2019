#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include <assert.h>

/************************************************************************/
/* copy from mingw-w64-v8.0.0\mingw-w64-v8.0.0\mingw-w64-crt\crt\ucrtbase_compat.c    
* add this function to fix libvlccore link error!
* libmingwex.a need link libmsvcrt.a to fix __ms_fwprintf linker error!
* we don't want add libmsvcrt.a as input dependency, or will cause CRT run time error( for example: malloc/free crash!)
* 
* 
*/
/************************************************************************/
int __ms_fwprintf(FILE* file, const wchar_t* fmt, ...)
{
	va_list ap;
	int ret;
	va_start(ap, fmt);
	ret = __stdio_common_vfwprintf(_CRT_INTERNAL_PRINTF_LEGACY_WIDE_SPECIFIERS, file, fmt, NULL, ap);
	va_end(ap);
	return ret;
}