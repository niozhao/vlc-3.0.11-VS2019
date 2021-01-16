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
#ifndef MULTI2_H
#define MULTI2_H

#include "aribb25api.h"
#include "portable.h"

typedef struct {

	void *private_data;

	void (* release)(void *m2);
	int (* add_ref)(void *m2);

	int (* set_round)(void *m2, int32_t val);

	int (* set_system_key)(void *m2, uint8_t *val);
	int (* set_init_cbc)(void *m2, uint8_t *val);
	int (* set_scramble_key)(void *m2, uint8_t *val);
	int (* clear_scramble_key)(void *m2);

	int (* encrypt)(void *m2, int32_t type, uint8_t *buf, int32_t size);
	int (* decrypt)(void *m2, int32_t type, uint8_t *buf, int32_t size);

} MULTI2;

#ifdef __cplusplus
extern "C" {
#endif

ARIBB25API MULTI2 *create_multi2();

#ifdef __cplusplus
}
#endif

#endif /* MULTI2_H */
