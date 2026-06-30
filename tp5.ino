#include <Adafruit_NeoPixel.h>

#define NEOPIN 11
#define CANT_PIXEL 16

Adafruit_NeoPixel RING = Adafruit_NeoPixel(CANT_PIXEL, NEOPIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  pinMode(NEOPIN, OUTPUT);
  RING.begin();
  RING.clear();
  RING.show();
}

void loop()
{
  
  RING.clear();
  RING.setPixelColor(0, RING.Color(255, 0, 0));
  RING.show();
  delay(500);

  RING.clear();
  RING.setPixelColor(1, RING.Color(0, 255, 0));
  RING.show();
  delay(500);
  
  RING.clear();
  RING.setPixelColor(2, RING.Color(0, 0, 255));
  RING.show();
  delay(500);

  RING.clear();
  RING.setPixelColor(3, RING.Color(255, 255, 0));
  RING.show();
  delay(500);

  RING.clear();
  RING.setPixelColor(4, RING.Color(0, 255, 255));
  RING.show();
  delay(500);

  RING.clear();
  RING.setPixelColor(5, RING.Color(255, 0, 255));
  RING.show();
  delay(500);

  RING.clear();
  RING.setPixelColor(6, RING.Color(255, 255, 255));
  RING.show();
  delay(500);

  RING.clear();
  RING.show();
  delay(1000);

  RING.clear(); RING.setPixelColor(0, RING.Color(255, 255, 255)); RING.show(); delay(200);
  RING.clear(); RING.setPixelColor(1, RING.Color(255, 255, 255)); RING.show(); delay(200);
  RING.clear(); RING.setPixelColor(2, RING.Color(255, 255, 255)); RING.show(); delay(200);
  RING.clear(); RING.setPixelColor(3, RING.Color(255, 255, 255)); RING.show(); delay(200);
  RING.clear(); RING.setPixelColor(4, RING.Color(255, 255, 255)); RING.show(); delay(200);
  
  RING.clear(); RING.setPixelColor(4, RING.Color(255, 255, 255)); RING.show(); delay(200);
  RING.clear(); RING.setPixelColor(3, RING.Color(255, 255, 255)); RING.show(); delay(200);
  RING.clear(); RING.setPixelColor(2, RING.Color(255, 255, 255)); RING.show(); delay(200);
  RING.clear(); RING.setPixelColor(1, RING.Color(255, 255, 255)); RING.show(); delay(200);
  RING.clear(); RING.setPixelColor(0, RING.Color(255, 255, 255)); RING.show(); delay(200);

  RING.clear();
  RING.show();
  delay(1000);

  uint32_t colorPares = RING.Color(random(0, 256), random(0, 256), random(0, 256));
  uint32_t colorImpares = RING.Color(random(0, 256), random(0, 256), random(0, 256));

  RING.clear();
  RING.setPixelColor(0, colorPares);
  RING.setPixelColor(2, colorPares);
  RING.setPixelColor(4, colorPares);
  RING.setPixelColor(6, colorPares);
  RING.setPixelColor(8, colorPares);
  RING.setPixelColor(10, colorPares);
  RING.setPixelColor(12, colorPares);
  RING.setPixelColor(14, colorPares);
  RING.show();
  delay(500);

  RING.clear();
  RING.setPixelColor(1, colorImpares);
  RING.setPixelColor(3, colorImpares);
  RING.setPixelColor(5, colorImpares);
  RING.setPixelColor(7, colorImpares);
  RING.setPixelColor(9, colorImpares);
  RING.setPixelColor(11, colorImpares);
  RING.setPixelColor(13, colorImpares);
  RING.setPixelColor(15, colorImpares);
  RING.show();
  delay(500);

  RING.clear();
  RING.show();
  delay(1000);
}