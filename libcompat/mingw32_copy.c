#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>
#include <assert.h>

/*
*  services_discovery/upnp  link error! add those two to fix.  will refine later!
*/
int* __imp__timezone(void)
{
	int* tmp = (int*)malloc(sizeof(int));
	*tmp = 0;
	return tmp;
}

long* __imp__daylight(void)
{
	long* tmp = (long*)malloc(sizeof(long));
	*tmp = 0;
	return tmp;
}

/************************************************************************/
/* add those two function below for plugins/codec/avcodec avoid link to libmingw32.a                                                                     */
/************************************************************************/
struct _exception {
	int type;
	const char* name;
	double arg1;
	double arg2;
	double retval;
};

typedef int(__cdecl* fUserMathErr)(struct _exception*);
static fUserMathErr stUserMathErr = NULL;

void __mingw_raise_matherr(int typ, const char* name, double a1, double a2,
	double rslt)
{
	struct _exception ex;
	if (!stUserMathErr)
		return;
	ex.type = typ;
	ex.name = (char*)name;
	ex.arg1 = a1;
	ex.arg2 = a2;
	ex.retval = rslt;
	(*stUserMathErr)(&ex);
}

void __mingw_setusermatherr(int(__cdecl* f)(struct _exception*))
{
	stUserMathErr = f;
	//__setusermatherr(f);
}
