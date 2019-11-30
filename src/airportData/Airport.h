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
	Airport(LEDs[5], "KATL"),
	Airport(LEDs[6], "KMSY"),
	Airport(LEDs[7], "KDFW"),
	Airport(LEDs[8], "KMCI"),
	Airport(LEDs[9], "KORD"),
	Airport(LEDs[10], "KOSH"),
	Airport(LEDs[11], "KDEN"),
	Airport(LEDs[12], "KSLC"),
	Airport(LEDs[13], "KBZN"),
	Airport(LEDs[14], "KSEA"),
	Airport(LEDs[15], "KSFO"),
	Airport(LEDs[16], "KLAX"),
	Airport(LEDs[17], "KCLT")
};
