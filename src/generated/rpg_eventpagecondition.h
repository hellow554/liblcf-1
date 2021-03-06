/* !!!! GENERATED FILE - DO NOT EDIT !!!!
 * --------------------------------------
 *
 * This file is part of liblcf. Copyright (c) 2017 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_RPG_EVENTPAGECONDITION_H
#define LCF_RPG_EVENTPAGECONDITION_H

// Headers
#include <stdint.h>

/**
 * RPG::EventPageCondition class.
 */
namespace RPG {
	class EventPageCondition {
	public:
		enum Comparison {
			Comparison_equal = 0,
			Comparison_greater_equal = 1,
			Comparison_less_equal = 2,
			Comparison_greater = 3,
			Comparison_less = 4,
			Comparison_not_equal = 5
		};

		struct Flags {
			bool switch_a = false;
			bool switch_b = false;
			bool variable = false;
			bool item = false;
			bool actor = false;
			bool timer = false;
			bool timer2 = false;
		} flags;
		int32_t switch_a_id = 1;
		int32_t switch_b_id = 1;
		int32_t variable_id = 1;
		int32_t variable_value = 0;
		int32_t item_id = 1;
		int32_t actor_id = 1;
		int32_t timer_sec = 0;
		int32_t timer2_sec = 0;
		int32_t compare_operator = 1;
	};
}

#endif
