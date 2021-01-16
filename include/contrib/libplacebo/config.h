/*
 * This file is part of libplacebo.
 *
 * libplacebo is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * libplacebo is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with libplacebo.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBPLACEBO_CONFIG_H_
#define LIBPLACEBO_CONFIG_H_

// Increased any time the library changes in a fundamental/major way.
#define PL_MAJOR_VER 0

// Increased any time the API changes. (Note: Does not reset when PL_MAJOR_VER
// is increased)
#define PL_API_VER 2

// Increased any time a fix is made to a given API version.
#define PL_FIX_VER 1

// Friendly name (`git describe`) for the overall version of the library
#define PL_VERSION "v0.2.1"

// Feature tests. These aren't described in further detail, but may be useful
// for programmers wanting to programmatically check for feature support
// in their compiled libshaderc versions.
#define PL_HAVE_SHADERC 0
#define PL_HAVE_VULKAN 0


#endif // LIBPLACEBO_CONTEXT_H_
