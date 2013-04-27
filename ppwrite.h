/**
 * @file ppwrite.h
 * @brief Constants, globals & macros
 *
 * @section LICENSE
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


#ifndef __PPWRITE_H
#define __PPWRITE_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <ieee1284.h>

//Constants
#define PP_FREAD_BUFFER (1048576) /*A megabyte*/
#define PP_BLOCK_SIZE   16

//Globals
struct parport pp;
struct parport_list pp_lst;

//Port capabilities
uint8_t pp_has_ecp;
uint8_t pp_has_compat;
uint8_t pp_has_epp;

//Return values
///Correct execution
#define PP_OK         0
///Generic error
#define PP_ERROR      1
///Not found error
#define PP_NOTFOUND   2
///System error/Not supported
#define PP_SYS        3

#endif
