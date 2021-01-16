#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include <assert.h>

/*****
* copy from mingw-w64-v8.0.0\mingw-w64-v8.0.0\mingw-w64-crt\stdio\vsnprintf.c
*/

int __ms_vsnprintf(char* s, size_t n, const char* format, va_list arg)
{
    int retval;

    /* _vsnprintf() does not work with zero length buffer
     * so count number of character by _vscprintf() call */
    if (n == 0 || !s)
        return _vscprintf(format, arg);

    retval = _vsnprintf(s, n, format, arg);

    /* _vsnprintf() returns negative number if buffer is too small
     * so count number of character by _vscprintf() call */
    if (retval < 0)
        retval = _vscprintf(format, arg);

    /* _vsnprintf() does not fill trailing null byte if there is not place for it */
    if ((size_t)retval >= n)
        s[n - 1] = '\0';

    return retval;
}