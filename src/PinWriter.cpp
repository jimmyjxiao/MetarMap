#include "PinWriter.h"
#include <Arduino.h>
#include "hardwareConfig.h"

using namespace pinWriters;

// wait until runtime to initialize the i2c stuff.
void writePin(unsigned char pin, bool value)
{
	Serial.print("pin: ");
	Serial.print(pin);
	PinHandler* handler = nullptr;
	for (int i = 0; i < (sizeof(Handlers) / sizeof(PinHandler*)); i++)
	{
		int lowerbound = i * 20;
        int upperbound = lowerbound + 20;
		
        if (pin >= lowerbound && pin < upperbound)
        {
			Serial.println("lowerbound: ");
		Serial.print(lowerbound);
		Serial.println("upperbound: ");
		Serial.println(upperbound);
            handler = Handlers[i];
			pin = pin - lowerbound;
                break;
        }
	}
	if(handler == nullptr)
	{
		Serial.print("help!");
	}
	else
	handler->writeLiteralPin(value, pin);
}

MCPHandler::MCPHandler(unsigned char i2cAddress) {
	mcp.begin(i2cAddress);
	mcp.pinMode(0, OUTPUT);
	mcp.digitalWrite(0, LOW);
	mcp.pinMode(1, OUTPUT);
	mcp.pinMode(8, OUTPUT);
	mcp.pinMode(9, OUTPUT);
	mcp.pinMode(10, OUTPUT);
	Serial.println("setup");
}

void MCPHandler::writeLiteralPin(bool val, unsigned char pin) {
	Serial.println("hit virtual method");
	Serial.print("i2c Addr: ");
	Serial.println(mcp.i2caddr);
	Serial.println(val);

	mcp.digitalWrite(pin, !val);
}

NativeHandler::NativeHandler() {
	pinMode(16, OUTPUT);
	pinMode(2, OUTPUT);
	pinMode(4, OUTPUT);
	digitalWrite(16,LOW);
	digitalWrite(2, LOW);
	digitalWrite(4, LOW);
}

void NativeHandler::writeLiteralPin(bool val, unsigned char pin) {
	Serial.println("writing pin: ");
	Serial.print(pin);
	Serial.print(" value: ");
	Serial.print(val);
	digitalWrite(pin, !val);
}
