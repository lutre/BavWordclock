#ifndef PixelMatrix_h
#define PixelMatrix_h

#include "Arduino.h"
#include "FastLED.h"
#include "XY.h"

class PixelMatrix
{
  public:
    PixelMatrix(uint8_t matrixWidthIn, uint8_t matrixHeigthIn);

    uint8_t matrixHeight = 0;
    uint8_t matrixWidth = 0;

    void setXY(uint8_t x, uint8_t y);
    void setPixel(uint16_t pixel);

    void setAllLEDs(CRGB colorIn);

  private:
    //CRGB leds[NUM_LEDS];

};

#endif

