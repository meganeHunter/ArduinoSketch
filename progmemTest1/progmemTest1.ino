#include <avr/io.h>
#include <avr/pgmspace.h>

#define ARRAYSIZE(x)  (sizeof(x) / sizeof((x)[0]))

const char thirsty[] PROGMEM = "String 0";

void setup()
{

}

void loop() 
{
  for (int i = 0; i < ARRAYSIZE(thirsty); i++) 
  {
    OCR2B = pgm_read_byte_near(&thirsty[i]);
    delayMicroseconds(125);
  }
} 
