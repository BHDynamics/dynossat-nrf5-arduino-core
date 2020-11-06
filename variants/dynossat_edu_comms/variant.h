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

#ifndef _VARIANT_DYNOSSAT_EDU_COMMS_
#define _VARIANT_DYNOSSAT_EDU_COMMS_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

#define _PINNUM(port, pin)    ((port)*32 + (pin))

//#define USE_LFXO      // Board uses 32khz crystal for LF
#define USE_LFRC    // Board uses RC for LF

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (16u)
#define NUM_DIGITAL_PINS     (6u)
#define NUM_ANALOG_INPUTS    (2u)
#define NUM_ANALOG_OUTPUTS   (0u)

#define LED_STATE_ON         1         // State when LED is litted

/*
 * Digital pins
 */
#define PIN_D0               (0)
#define PIN_D1               (1)
#define PIN_D2               (2)
#define PIN_D3               (3)
#define PIN_D4               (4)
#define PIN_D5               (5)

static const uint8_t D0  = PIN_D0 ;
static const uint8_t D1  = PIN_D1 ;
static const uint8_t D2  = PIN_D2 ;
static const uint8_t D3  = PIN_D3 ;
static const uint8_t D4  = PIN_D4 ;
static const uint8_t D5  = PIN_D5 ;

static const uint8_t LORA_CS  = PIN_D4 ;
static const uint8_t RADIO24_IRQ  = PIN_D5 ;

/*
 * Analog pins
 */
#define PIN_A0               (2)
#define PIN_A1               (3)

static const uint8_t A0  = PIN_A0 ;
static const uint8_t A1  = PIN_A1 ;

#define ADC_RESOLUTION    14

/*
 * Serial interfaces
 */
 
//#define SERIAL_INTERFACES_COUNT 2

#define PIN_SERIAL_RX       (9)
#define PIN_SERIAL_TX       (8)

#define PIN_SERIAL1_TX       (7)
#define PIN_SERIAL1_RX       (6)

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO         (13)
#define PIN_SPI_MOSI         (12)
#define PIN_SPI_SCK          (14)

static const uint8_t SS   = 15 ;
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

static const uint8_t SDI = PIN_SPI_MOSI ;
static const uint8_t SDO = PIN_SPI_MISO ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (12u)
#define PIN_WIRE_SCL         (13u)

static const uint8_t SDA = PIN_WIRE_SDA ;
static const uint8_t SCL = PIN_WIRE_SCL ;

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif /* _VARIANT_DYNOSSAT_EDU_COMMS_ */
