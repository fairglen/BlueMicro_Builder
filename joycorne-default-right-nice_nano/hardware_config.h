/*
Copyright 2020-2021 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#ifndef HARDWARE_CONFIG_H
#define HARDWARE_CONFIG_H
#include "hardware_variants.h"
/* HARDWARE DEFINITION*/
/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 6
#define MATRIX_ROW_PINS { 6, 7, 8, 9 }
#define MATRIX_COL_PINS { 3, 4, 5, 14, 16, 10 }

#define ARDUINO_NICE_NANO 1 // used in debug_cli.cpp to bypass 0.14 and 0.16 that are directly connected to 0.18 (reset)

#define UNUSED_PINS {}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
	#define BACKLIGHT_PWM_ON 0
	#define WS2812B_LED_PIN 6

	#define WS2812B_LED_COUNT 1
	#define WS2812B_LED_ON 1
     #define BATTERY_TYPE BATT_LIPO

#define  STATUS_KB_LED_PIN 17  //red = 0.17
        #define VCC_PIN 13
        #define VCC_POLARITY_ON 0
        #define  STATUS_BLE_LED_PIN  15  //blue = 0.15
          //#define  STATUS_KB_LED_PIN 0  //no RED LED

//  OLED DEFINITION
    #define I2C_SDA_PIN 17
    #define I2C_SCK_PIN 20
    #define DISPLAY_U8G2_CONSTRUCTOR U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C // see https://github.com/olikraus/u8g2/wiki/u8g2setupcpp for reference


   /*     #define D3      6
        #define D2      8
        #define D1      17
        #define D0      20
        #define D4      22
        #define C6      24
        #define D7      32 //1.00  = 32+0
        #define E6      11
        #define B4      36 //1.04  = 32+4
        #define B5      38 //1.06  = 32+6

        #define F4      31
        #define F5      29
        #define F6      2
        #define F7      47 //1.15  = 32+15
        #define B1      45 //1.13  = 32+13
        #define B3      43 //1.11 = 32+11
        #define B2      10
        #define B6      9
        #define NC      33 //1.01 = 32+1 // NC is for not connected....*/
#endif /* HARDWARE_CONFIG_H */
