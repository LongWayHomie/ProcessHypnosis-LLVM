/*===---- __stddef_offsetof.h - Definition of offsetof ---------------------===
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

  // Define __has_feature if not already defined
#ifndef __has_feature
#define __has_feature(x) 0
#endif

// Define __building_module if not already defined
#ifndef __building_module
#define __building_module(x) 0
#endif

#if !defined(offsetof) ||                                                      \
    (__has_feature(modules) && !__building_module(_Builtin_stddef))
#define offsetof(t, d) __builtin_offsetof(t, d)
#endif
