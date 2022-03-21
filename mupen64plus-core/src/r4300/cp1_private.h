/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *   Mupen64plus - cp1_private.h                                           *
 *   Mupen64Plus homepage: http://code.google.com/p/mupen64plus/           *
 *   Copyright (C) 2002 Hacktarux                                          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.          *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef M64P_R4300_CP1_PRIVATE_H
#define M64P_R4300_CP1_PRIVATE_H

#include <stdint.h>

#include "cp1.h"

#if !defined(NEW_DYNAREC) || NEW_DYNAREC < NEW_DYNAREC_ARM
extern float *reg_cop1_simple[32];
extern double *reg_cop1_double[32];
extern uint32_t FCR0, FCR31;
#else
extern void *base_addr;
#define reg_cop1_simple ( (float**)  (((char*)base_addr)+33555160))
#define reg_cop1_double ((double**)  (((char*)base_addr)+33555416))
#define FCR0            (*(uint32_t*)(((char*)base_addr)+33554752))
#define FCR31           (*(uint32_t*)(((char*)base_addr)+33554756))
#endif
extern int64_t reg_cop1_fgr_64[32];
extern uint32_t rounding_mode;

#endif /* M64P_R4300_CP1_PRIVATE_H */


