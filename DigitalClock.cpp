#include <iostream>
#include <tuple>
#include "DigitalClock.h"

void DigitalClock::refreshDisplay(){
	int sec = getTime(SEC);
	int min = getTime(MIN);
	int hour = getTime(HOUR);
	int term_width;	
	int term_height;	

	std::tie(term_width, term_height) = gatherTerminalStats();
	
	std::cout << term_width << "\n";
	std::cout << term_height << "\n";
}

std::string DigitalClock::getDisplayDigitRow(unsigned int number, unsigned int row) const{
	std::string rowstr = "";
	
	return rowstr;
}
