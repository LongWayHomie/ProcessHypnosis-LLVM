/*===---- __stddef_ptrdiff_t.h - Definition of ptrdiff_t -------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

 /*
  * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
  * and needs to behave as if it was textual.
  */
#ifndef __has_feature
#define __has_feature(x) 0
#endif

#ifndef __building_module
#define __building_module(x) 0
#endif

#if !defined(_PTRDIFF_T) ||                                                    \
    (__has_feature(modules) && !__building_module(_Builtin_stddef))
#define _PTRDIFF_T

typedef __PTRDIFF_TYPE__ ptrdiff_t;

#endif
