# Arduino Core for DynOSSAT nRF5 Boards (Beta)

This repository contains the Arduino BSP for Adafruit Bluefruit nRF52 series:

- DynOSSAT-EDU-Comms (SatComms) - nRF52832

## BSP Installation

There are two methods that you can use to install this BSP. We highly recommend the first option unless you wish to participate in active development of this codebase via Github.

### Recommended: Adafruit nRF52 BSP via the Arduino Board Manager

 1. [Download and install the Arduino IDE](https://www.arduino.cc/en/Main/Software) (At least v1.6.12)
 2. Start the Arduino IDE
 3. Go into Preferences
 4. Add https://bhdynamics.github.io/board_index/package_dynossat_index.json as an 'Additional Board Manager URL'
 5. Restart the Arduino IDE
 6. Open the Boards Manager from the Tools -> Board menu and install 'DynOSSAT-EDU nRF5 Boards'
 7. Once the BSP is installed, select 'DynOSSAT-EDU-Comms' from the Tools -> Board menu, which will update your system config to use the right compiler and settings for the nRF52.

### Optional (Core Development): Adafruit nRF52 BSP via git

 1. Install BSP via Board Manager as above to install compiler & tools.
 2. Delete the core folder `nrf52` installed by Board Manager in Adruino15, depending on your OS. It could be
  * macOS  : `~/Library/Arduino15/packages/adafruit/hardware/nrf52`
  * Linux  : `~/.arduino15/packages/adafruit/hardware/nrf52`
  * Windows: `%APPDATA%\Local\Arduino15\packages\adafruit\hardware\nrf52`
 3. `cd <SKETCHBOOK>`, where `<SKETCHBOOK>` is your Arduino Sketch folder:
  * macOS  : `~/Documents/Arduino`
  * Linux  : `~/Arduino`
  * Windows: `~/Documents/Arduino`
 4. Create a folder named `hardware/Adafruit`, if it does not exist, and change directories to it
 5. Clone this repo & its submodules: `git clone --recurse-submodules https://github.com/adafruit/Adafruit_nRF52_Arduino.git`
 6. Restart the Arduino IDE
 7. Once the BSP is installed, select 'Adafruit Bluefruit nRF52 Feather' from the Tools -> Board menu, which will update your system config to use the right compiler and settings for the nRF52.

### Burning SoftDevice S132

This BSP includes the SoftDevice S132, version 6.1.1. You need the SoftDevice in order to make the board work.
To burn it, just select Tools -> Burn bootloader from within the Arduino IDE. It will erase the board and flash the SoftDevice.

You will also need on your system and available in the system path:

- Segger [JLink Software and Documentation Pack](https://www.segger.com/downloads/jlink)

Check to make sure you can run `nrfjprog` from your terminal/command prompt

## Credits

This core is based on [Adafruit_nRF52_Arduino](https://github.com/adafruit/Adafruit_nRF52_Arduino) by Adafruit,
which is based on [Arduino-nRF5](https://github.com/sandeepmistry/arduino-nRF5) by Sandeep Mistry and
the [Arduino SAMD Core](https://github.com/arduino/ArduinoCore-samd) by Arduino.

The following libraries are used:

- [freeRTOS](https://www.freertos.org/) as operating system
- [tinyusb](https://github.com/hathach/tinyusb) as usb stack
- [nrfx](https://github.com/NordicSemiconductor/nrfx) for peripherals driver
- [littlefs](https://github.com/ARMmbed/littlefs) for internal file system
- [Bluefruit52 for DynOSSAT-EDU]() to enable Bluetooth LE capabilities
