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
#ifndef ARIB_STD_B25_H
#define ARIB_STD_B25_H

#include "aribb25api.h"
#include "portable.h"
#include "b_cas_card.h"

typedef struct {
	uint8_t *data;
	int32_t  size;
} ARIB_STD_B25_BUFFER;

typedef struct {

	int32_t  program_number; /* channel */
	
	int32_t  ecm_unpurchased_count;
	int32_t  last_ecm_error_code;

	int32_t  padding;

	int64_t  total_packet_count;
	int64_t  undecrypted_packet_count;
	
} ARIB_STD_B25_PROGRAM_INFO;

typedef struct {

	void *private_data;

	void (* release)(void *std_b25);

	int (* set_multi2_round)(void *std_b25, int32_t round);
	int (* set_strip)(void *std_b25, int32_t strip);
	int (* set_emm_proc)(void *std_b25, int32_t on);
	
	int (* set_b_cas_card)(void *std_b25, B_CAS_CARD *bcas);

	int (* set_unit_size)(void *std_b25, int size);
	
	int (* reset)(void *std_b25);
	int (* flush)(void *std_b25);

	int (* put)(void *std_b25, ARIB_STD_B25_BUFFER *buf);
	int (* get)(void *std_b25, ARIB_STD_B25_BUFFER *buf);

	int (* get_program_count)(void *std_b25);
	int (* get_program_info)(void *std_b25, ARIB_STD_B25_PROGRAM_INFO *info, int32_t idx);

} ARIB_STD_B25;

#define ARIB_STD_B25_TS_PROBING_MIN_DATA (320 * 9 - 1)

#ifdef __cplusplus
extern "C" {
#endif

ARIBB25API ARIB_STD_B25 *create_arib_std_b25();

#ifdef __cplusplus
}
#endif

#endif /* ARIB_STD_B25_H */

