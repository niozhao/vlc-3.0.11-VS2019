those libs are from:
1:  /usr/lib/gcc/x86_64-w64-mingw32/9.3-win32/
2:  /usr/x86_64-w64-mingw32/lib/
3:  ~/Code/vlc-3.0.11_x64/contrib/x86_64-w64-mingw32/lib/

libmingwex.lib
1: come from: lib /REMOVE:lib64_libmingwex_a-vsnprintf.o libmingwex.a
2: why do this?
    because lib64_libmingwex_a-vsnprintf.o need link libmsvcrt.a to resolve unsolved symbol error, we don't want link libmsvcrt.a, it will cause CRT runtime error
    (for example, malloc in a dll, free in another will cause crash).
    lib64_libmingwex_a-vsnprintf.o just define function:__ms_vsnprintf, so i define a funcion named __ms_vsnprintf and delete this .o in libmingwex.a


same issue like:
1: error LNK2005: round already defined in libmingwex.a(lib64_libmingwex_a-round.o) when compile plugin: stream_out_chromaprint
   fix by "lib /REMOVE:lib64_libmingwex_a-round.o libmingwex.a" and rename it to libmingwex_remove_round.lib 

2: error LNK2005: __report_gsfailure already defined in libmingw32.a(lib64_libmingw32_a-gs_support.o)