/*
 * Copyright(C) 2011-2015 Pedro H. Penna <pedrohenriquepenna@gmail.com>
 * 
 * This file is part of Nanvix.
 * 
 * Nanvix is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Nanvix is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with Nanvix. If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file
 * 
 * @brief strchr() implementation.
 */

#include <stdlib.h>
#include <sys/types.h>

/**
 * @brief Finds byte in string.
 * 
 * @details Locates the first occurrence of @p c (converted to an unsigned char)
 *          in the string pointed to by @p s. The terminating null byte is
 *          considered to be part of the string.
 * 
 * @returns A pointer to the byte, or a null pointer if the byte was not found. 
 */
char *strchr(const char *s, int c)
{
	/* Scan string. */
	while (*s != '\0')
	{
		/* Found. */
		if (*s == c)
			return ((char*)s);
		
		s++;
	}
	
	return ((c == '\0') ? (char *) s : NULL);
}
