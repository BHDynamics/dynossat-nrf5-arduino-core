/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)
  Copyright (c) 2020 Blackhand Dynamics SL. All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"

#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] = {
  
  _PINNUM(0, 26),   // P0.26 (D0) 0
  _PINNUM(0, 27),   // P0.07 (D1) 1
  _PINNUM(0, 28),   // P0.10 (D2) 2
  _PINNUM(0, 29),   // P0.09 (D3) 3
  _PINNUM(0, 25),   // P0.25 (D4, LORA_CS) 4
  _PINNUM(0, 2),   // P0.02 (D5, RADIO24_IRQ) 5
      
  _PINNUM(0, 8),    // P0.09 (UART1_TX) 6
  _PINNUM(0, 7),    // P0.07 (UART1_RX) 7
  _PINNUM(0, 10),   // P0.10 (SERIAL_TX) 8
  _PINNUM(0, 9),    // P0.09 (SERIAL_RX) 9
  _PINNUM(0, 6),    // P0.06 (I2C_SDA) 10
  _PINNUM(0, 3),    // P0.03 (I2C_SCL) 11
  _PINNUM(0, 17),   // P0.17 (SPI_SDO) 12
  _PINNUM(0, 18),   // P0.18 (SPI_SDI) 13
  _PINNUM(0, 19),   // P0.19 (SPI_SCK) 14
  _PINNUM(0, 16),   // P0.16 (SPI_CS) 15

  _PINNUM(0, 21),   // P0.18 (RESET) 16

};

/*void initVariant()
{
}*/

