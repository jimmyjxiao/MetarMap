#pragma once
#include "LEDWriter.h"
#include "PinWriter.h"

extern pinWriters::PinHandler* Handlers[1];
void initializeHardware();
constexpr addressableLED LED1 = addressableLED(0);
constexpr addressableLED LED2 = addressableLED(1);
constexpr addressableLED LED3 = addressableLED(2);
constexpr addressableLED LED4 = addressableLED(3);
constexpr addressableLED LED5 = addressableLED(4);
constexpr addressableLED LED6 = addressableLED(5);
constexpr addressableLED LED7 = addressableLED(6);
constexpr addressableLED LED8 = addressableLED(7);
constexpr addressableLED LED9 = addressableLED(8);
constexpr addressableLED LED10 = addressableLED(9);
constexpr addressableLED LED11 = addressableLED(10);
constexpr addressableLED LED12 = addressableLED(11);
constexpr addressableLED LED13 = addressableLED(12);
constexpr addressableLED LED14 = addressableLED(13);
constexpr addressableLED LED15 = addressableLED(14);
constexpr addressableLED LED16 = addressableLED(15);
constexpr addressableLED LED17 = addressableLED(16);
constexpr commonAnnodeRGBLED LED18 = commonAnnodeRGBLED(16,4,2);
constexpr const RGB_LED* const LEDs[] = {
	&LED1, &LED2, &LED3, &LED4,&LED5,&LED6, &LED7, &LED8, &LED9, &LED10, &LED11, &LED12, &LED13, &LED14, &LED15, &LED16, &LED17, &LED18
	};