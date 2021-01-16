
#ifndef EBML_DLL_API_H
#define EBML_DLL_API_H

#ifdef EBML_STATIC_DEFINE
#  define EBML_DLL_API
#  define EBML_NO_EXPORT
#else
#  ifndef EBML_DLL_API
#    ifdef ebml_EXPORTS
        /* We are building this library */
#      define EBML_DLL_API 
#    else
        /* We are using this library */
#      define EBML_DLL_API 
#    endif
#  endif

#  ifndef EBML_NO_EXPORT
#    define EBML_NO_EXPORT 
#  endif
#endif

#ifndef EBML_DEPRECATED
#  define EBML_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef EBML_DEPRECATED_EXPORT
#  define EBML_DEPRECATED_EXPORT EBML_DLL_API EBML_DEPRECATED
#endif

#ifndef EBML_DEPRECATED_NO_EXPORT
#  define EBML_DEPRECATED_NO_EXPORT EBML_NO_EXPORT EBML_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef EBML_NO_DEPRECATED
#    define EBML_NO_DEPRECATED
#  endif
#endif

#endif /* EBML_DLL_API_H */
