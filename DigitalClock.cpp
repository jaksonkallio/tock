#include <iostream>
#include <tuple>
#include "DigitalClock.h"

void DigitalClock::refreshDisplay(){
	int sec = getTime(SEC);
	int min = getTime(MIN);
	int hour = getTime(HOUR);
	int term_height;
	int term_width;

	std::tie(term_height, term_width) = gatherTerminalStats();
	
	std::cout << term_width << "\n";
	std::cout << term_height << "\n";
}
