#include <iostream>
#include "DigitalClock.h"

void DigitalClock::refreshDisplay(){
	int sec = getTime(SEC);
	int min = getTime(MIN);
	int hour = getTime(HOUR);

	gatherTerminalStats();

	std::cout << terminal_width << "\n";
	std::cout << terminal_height << "\n";
}
