/*
 * This file is part of fraud-bridge.
 *
 * (C) 2013-2023 by Sebastian Krahmer
 *                  sebastian [dot] krahmer [at] gmail [dot] com
 *
 * fraud-bridge is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * fraud-bridge is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with fraud-bridge.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef fraudbriedge_misc_h
#define fraudbriedge_misc_h

#include <cstdint>


namespace fraudbridge {

int writen(int fd, const void *buf, size_t len);

int readn(int fd, void *buf, size_t len);

unsigned short in_cksum (const unsigned short *, int);

void patch_mss(char *, char *, uint16_t);

uint16_t ntohs_ua(const void *);


}

#endif

