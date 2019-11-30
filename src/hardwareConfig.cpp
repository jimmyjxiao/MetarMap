#include "hardwareConfig.h"
#include "LEDWriter.h"
using namespace pinWriters;
PinHandler* Handlers[1];

void initPins()
{
	/*Handlers[0] = new MCPHandler(0);
	Handlers[1] = new MCPHandler(4);
	Handlers[2] = new MCPHandler(2);*/
	Handlers[0] = new NativeHandler();
}

void initializeHardware()
{
	initPins();
	addressableLED::initializeLEDs(17, 5);
}
