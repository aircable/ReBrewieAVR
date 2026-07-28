/*
 * Brewie AVR hardware selection.
 *
 * Select the physical controller board here.  The B20 uses the HX711 load
 * cell interface and the B20+ uses the original I2C pressure sensor.
 */
#ifndef BREWIE_HARDWARE_CONFIG_H
#define BREWIE_HARDWARE_CONFIG_H

#ifndef BREWIE_HARDWARE_B20
#define BREWIE_HARDWARE_B20 1
#endif

#include "B20Plus.h"

#if BREWIE_HARDWARE_B20
  #define BREWIE_USE_HX711 1
  #undef MASH_TEMP
  #define MASH_TEMP 11
  #undef BOIL_TEMP
  #define BOIL_TEMP 10
#else
  #define BREWIE_USE_HX711 0
#endif

#endif
