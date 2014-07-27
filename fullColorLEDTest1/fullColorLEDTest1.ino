#include <Adafruit_NeoPixel.h>

int ledPin = 4;
int vol1Pin = 1;

int r,g,b;

Adafruit_NeoPixel Strip = AdaFruit_NeoPixel(1,ledPin,NEO_GRB + NEO_KHZ800);

void setup()
{
  strip.begin();
  strip.show();
}

void loop()
{
  r = g = b = analogRead(vol1Pin);
  
  strip.setPixelColor(0,strip.Color(r,g,b));
}
