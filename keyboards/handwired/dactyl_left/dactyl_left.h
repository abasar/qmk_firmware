/* Copyright 2019 RedForty
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT(\
    k00, k01, k02, k03, k04, k05,                \
    k10, k11, k12, k13, k14, k15,                \
    k20, k21, k22, k23, k24, k25,                \
    k30, k31, k32, k33, k34, k35,                \
    k50, k51, k52, k53, k54,                     \
                                       k36, k37, \
                                       k40,      \
                                  k55, k56, k57  \
) { \
    { k00,   k01,   k02,   k03,   k04,   k05 }, \
    { k10,   k11,   k12,   k13,   k14,   k15 }, \
    { k20,   k21,   k22,   k23,   k24,   k25 }, \
    { k30,   k31,   k32,   k33,   k34,   k35 }, \
    { k50,   k51,   k52,   k53,   k54,   k55 },  \
    { k57,   k40,   k37,   k36,   KC_NO, KC_NO }, \
    { k56,   k55,   KC_NO, KC_NO, KC_NO, KC_NO }, \
}
