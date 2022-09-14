
/* Adapted from https://github.com/hexagon5un/AVR-Programming.git */

#include <avr/io.h> // pins, ports, etc.
#include <util/delay.h>

/* 
  Blink an LED on an ATmega328P chip pin 14 (PB0, i.e. PORTB0). 
  This is the D8 pin on an Arduino, the lower left corner pin on the DIP package.
*/
int main(void) {

  DDRB |= 0b00000001; // Data Direction Register B: writing a one to enable output.

  while (1) {
    PORTB = 0b00000001; // turn on first LED pin in PORTB
    _delay_ms(1000);
    PORTB = 0b00000000; // Turn off all B pins, including LED
    _delay_ms(1000);
  }

  return 0;
}
