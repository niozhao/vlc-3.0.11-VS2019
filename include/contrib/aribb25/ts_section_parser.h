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
#ifndef TS_SECTION_PARSER_H
#define TS_SECTION_PARSER_H

#include "aribb25api.h"
#include "ts_common_types.h"

typedef struct {
	int64_t total;      /* total received section count      */
	int64_t unique;     /* unique section count              */
	int64_t error;      /* crc and other error section count */
} TS_SECTION_PARSER_STAT;

typedef struct {

	void *private_data;

	void (* release)(void *parser);

	int (* reset)(void *parser);

	int (* put)(void *parser, TS_HEADER *hdr, uint8_t *data, int size);
	int (* get)(void *parser, TS_SECTION *sect);
	int (* ret)(void *parser, TS_SECTION *sect);

	int (* get_count)(void *parser);
	
	int (* get_stat)(void *parser, TS_SECTION_PARSER_STAT *stat);
	
} TS_SECTION_PARSER;

#ifdef __cplusplus
extern "C" {
#endif

ARIBB25API TS_SECTION_PARSER *create_ts_section_parser();

#ifdef __cplusplus
}
#endif

#endif /* TS_SECTION_PARSER_H */
