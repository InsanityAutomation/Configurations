/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Bitmap for splashscreen
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */
#pragma once

#define CUSTOM_BOOTSCREEN_TIMEOUT   2500
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64

/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from 128x64 C/C++ data
 */


#define HMIJ3S_BMPWIDTH  128

const unsigned char custom_start_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11111111,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11111111,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,B11111111,B01111111,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,B11111110,B00011111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,B11111100,B00001111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,B11111000,B00000011,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11111000,B00000001,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11111111,B11110000,B00000000,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11111111,B11100000,B00000000,B00111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B11000000,B00000000,B00001111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B10000000,B00000000,B00000111,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B00000000,B00000000,B00000001,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B01111111,B11111111,B00000000,B00000000,B00000000,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,B11111110,B00000000,B00000000,B00000000,B01111111,B11111111,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,B11111100,B00000000,B00000000,B00000000,B00011111,B11111111,B10000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,B11111000,B00000000,B00000000,B00000000,B00001111,B11111111,B10000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11110000,B00000000,B00000000,B00000000,B00000111,B11111111,B10000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000111,B11111111,B11100000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00001111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000011,B11111111,B11111110,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000001,B11111111,B11111110,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00111111,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,B11111110,B01111110,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000001,B11111111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,B11111000,B00001110,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00001111,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B11110000,B00001110,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00011111,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B11100000,B00000110,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00111111,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B11100000,B00000110,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B01111111,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000001,B11100000,B00000110,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B01111111,B11111111,B11110000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111000,B00000110,B00000000,B00000000,B00000000,
  B00000000,B00000111,B11111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,B00111110,B00000000,B00000000,B00000000,
  B00000000,B00011111,B11111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111001,B11110000,B00000000,B00000000,
  B00000000,B00011111,B11111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,B11110000,B00000000,B00000000,
  B00000000,B00011111,B11111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11000000,B00000000,B00000000,
  B00000000,B00011111,B11111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11111111,B11100010,B00000000,B00000000,
  B00000000,B00011111,B11111111,B11111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,B11111111,B10000000,B00000000,
  B00000000,B00011111,B11111111,B11111111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01000011,B11111111,B11000000,B00000000,
  B00000000,B00011111,B11111111,B11111111,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11111111,B10000000,B00000000,
  B00000000,B00011111,B11111111,B11111111,B11111111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11111100,B00000000,B00000000,
  B00000000,B00001111,B11111111,B11111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111100,B00000000,B00000000,
  B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000100,B00111100,B00000000,B00000000,
  B00111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00111001,B00000000,B00000000,
  B00111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11100001,B11000000,B00000000,
  B00111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,B11111111,B11110000,B00000000,
  B00111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,B11111100,B00000000,
  B00111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B11111111,B11111111,B00000000,
  B00011111,B11111111,B11111111,B11111111,B11111111,B11111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11111111,B11100111,B11000000,
  B00001111,B11111111,B11111111,B11111111,B11111111,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11111111,B11000011,B11110000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B11011111,B11100001,B10000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00001111,B11110000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000111,B11100000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000011,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000
};
