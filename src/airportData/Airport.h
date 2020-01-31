#pragma once
#include "../LEDWriter.h"
#include <memory>
#include "../hardwareConfig.h"
namespace airportDataTypes
{
	enum class Metar_Status
	{
		VFR, MVFR, IFR, LIFR, off
	};
}


class Airport
{
	private:
		const RGB_LED * LEDhandler;
	public:
		const char* const id;
		constexpr Airport(const RGB_LED* const LED, const char* const airportCode) : LEDhandler(LED), id(airportCode) {}
		void SetStatus(airportDataTypes::Metar_Status s) const;
};
const Airport Airports[] = {
	Airport(LEDs[0], "KBOS"),
	Airport(LEDs[1], "KJFK"),
	Airport(LEDs[2], "KPHL"),
	Airport(LEDs[3], "KDCA"),
	Airport(LEDs[4], "KRDU"),
	Airport(LEDs[5], "KCLT"),
	Airport(LEDs[6], "KATL"),
	Airport(LEDs[7], "KMSY"),
	Airport(LEDs[8], "KDFW"),
	Airport(LEDs[9], "KMCI"),
	Airport(LEDs[10], "KORD"),
	Airport(LEDs[11], "KOSH"),
	Airport(LEDs[12], "KDEN"),
	Airport(LEDs[13], "KSLC"),
	Airport(LEDs[14], "KBZN"),
	Airport(LEDs[15], "KSEA"),
	Airport(LEDs[16], "KSFO"),
	Airport(LEDs[17], "KLAX")
};
