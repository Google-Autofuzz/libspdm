/**
    Copyright Notice:
    Copyright 2021 DMTF. All rights reserved.
    License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/libspdm/blob/main/LICENSE.md
**/

/** @file
  Provides random number generator services.
**/

#ifndef __RNG_LIB_H__
#define __RNG_LIB_H__

/**
  Generates a 64-bit random number.

  if rand is NULL, then ASSERT().

  @param[out] rand_data     buffer pointer to store the 64-bit random value.

  @retval TRUE         Random number generated successfully.
  @retval FALSE        Failed to generate the random number.

**/
boolean get_random_number_64(OUT uint64 *rand_data);

#endif // __RNG_LIB_H__
