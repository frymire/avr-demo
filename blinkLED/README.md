Call 'make' to create .elf file from source files (.c, .h). This will make .o and .map files in the process.

Call 'make all' to also make the .hex file that is needed when we flash the program.

Call 'make flash' to also flash to the microcontroller.

Call 'make clean' to delete everything but the source files.

When programming the Leonardo board on the Latte Panda with ArduinoISP, you have to uncomment "#define USE_OLD_STYLE_WIRING" so that it switches the SPI pins like this...

  #ifdef USE_OLD_STYLE_WIRING

    #define PIN_MOSI	11
    #define PIN_MISO	12
    #define PIN_SCK		13

  #endif

  In the Makefile, use "PROGRAMMER_TYPE = arduino", and be sure to set the correct COM port in "PROGRAMMER_ARGS = -b 19200 -P com3".
