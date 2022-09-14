# avr-demo
Proof that I can program AVR microcontrollers directly using C/C++.

Many of these demo codes are adapted from the [support material](https://github.com/hexagon5un/AVR-Programming.git) for `Make: AVR Programming` by Elliot Williams.

Setup:
- Install the [AVR GNU toolchain](https://www.microchip.com/en-us/tools-resources/develop/microchip-studio/gcc-compilers#), and add its `bin` directory to the Path.
- Install [avrdude](https://github.com/mariusgreuel/avrdude/releases), and add its top-level install directory to the Path.
- Add the avrdude_utilities folder from this repository to the Path. These were copied from the AVR-Programming repo, and could presumably be linked from a separate MinGW install.

For any given project, it will typically be necessary to modify the Makefile. To program an ATmega328P chip from Windows using an Arduino as ISP, for instance, set:
- MCU = ATmega328P
- PROGRAMMER_TYPE = avrisp
- PROGRAMMER_ARGS = -b 19200 -P com6
If com6 is not the correct port, check within "Arduino IDE | Tools | Ports" menu or "Device Manager | Ports (COM & LPT)" branch for a hint.

To build and program the chip, run "make flash" from within the project folder containing the Makefile.
