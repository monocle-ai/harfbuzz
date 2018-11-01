/*
 * Copyright © 2018  Ebrahim Byagowi
 *
 *  This is part of HarfBuzz, a text shaping library.
 *
 * Permission is hereby granted, without written agreement and without
 * license or royalty fees, to use, copy, modify, and distribute this
 * software and its documentation for any purpose, provided that the
 * above copyright notice and the following two paragraphs appear in
 * all copies of this software.
 *
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF THE COPYRIGHT HOLDER HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 * THE COPYRIGHT HOLDER SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE COPYRIGHT HOLDER HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 */

#ifndef HB_OT_H_IN
#error "Include <hb-ot.h> instead."
#endif

#ifndef HB_AAT_H
#define HB_AAT_H

#include "hb.h"
#include "hb-ot.h"

HB_BEGIN_DECLS

/**
 * hb_aat_type_t:
 *
 * Feature identifier
 *
 * Since: REPLACEME
 */
typedef uint16_t hb_aat_feature_type_t;

/**
 * hb_aat_feature_t:
 *
 * Feature value
 *
 * Since: REPLACEME
 */
typedef uint16_t hb_aat_feature_setting_t;

/**
 * hb_aat_feature_type_selector_t:
 *
 * Feature type record
 *
 * Since: REPLACEME
 **/
typedef struct hb_aat_feature_type_selector_t
{
  hb_aat_feature_setting_t setting;
  hb_ot_name_id_t name_id;
} hb_aat_feature_type_selector_t;

/*
 * Since: REPLACEME
 */
#define HB_AAT_FEATURE_NO_DEFAULT_SETTING ((hb_aat_feature_setting_t) -1)

HB_EXTERN unsigned int
hb_aat_layout_get_feature_settings (hb_face_t                      *face,
				    hb_aat_feature_type_t           type,
				    hb_aat_feature_setting_t       *default_setting, /* OUT.     May be NULL. */
				    unsigned int                    start_offset,
				    unsigned int                   *selectors_count, /* IN/OUT.  May be NULL. */
				    hb_aat_feature_type_selector_t *selectors_buffer /* OUT.     May be NULL. */);

HB_END_DECLS

#endif /* HB_AAT_H */