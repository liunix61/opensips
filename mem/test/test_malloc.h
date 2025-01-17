/*
 * Copyright (C) 2020 OpenSIPS Solutions
 *
 * This file is part of opensips, a free SIP server.
 *
 * opensips is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * opensips is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,USA
 */

#ifndef __TEST_MALLOC_H__
#define __TEST_MALLOC_H__

/* attendant + 7 more */
#define TEST_MALLOC_PROCS  8

/* stress-test the PKG and/or SHM allocator implementations */
void init_malloc_tests(void);

#ifdef HP_MALLOC
void test_malloc(void);
#else
#define test_malloc()
#endif

#endif /* __TEST_MALLOC_H__ */
