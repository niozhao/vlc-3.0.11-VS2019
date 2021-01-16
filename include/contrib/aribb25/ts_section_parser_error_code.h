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
#ifndef TS_SECTION_PARSER_ERROR_CODE_H
#define TS_SECTION_PARSER_ERROR_CODE_H

#define TS_SECTION_PARSER_ERROR_INVALID_PARAM        -1
#define TS_SECTION_PARSER_ERROR_NO_ENOUGH_MEMORY     -2
#define TS_SECTION_PARSER_ERROR_INVALID_TS_PID       -3
#define TS_SECTION_PARSER_ERROR_NO_SECTION_DATA      -4

#define TS_SECTION_PARSER_WARN_CRC_MISSMATCH          1
#define TS_SECTION_PARSER_WARN_LENGTH_MISSMATCH       2

#endif /* TS_SECTION_PARSER_ERROR_CODE_H */
