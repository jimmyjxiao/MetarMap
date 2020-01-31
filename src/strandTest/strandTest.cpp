#include "../LEDWriter.h"
#include "../hardwareConfig.h"
#include <Arduino.h>
#include "strandTest.h"


// Rainbow cycle along whole strip. Pass delay time (in ms) between frames.
void rainbow(int wait) {
  for ( int i = 0; i < (1 << 3); ++i ) {
      for(const auto& LED : LEDs)
      {
          LED->setRGB(i & 0x001, i & 0x002, i & 0x004);
          delay(wait);
      }}
}
