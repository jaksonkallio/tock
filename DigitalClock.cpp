#include <iostream>
#include <tuple>
#include "DigitalClock.h"

bool const DigitalClock::digits[10][5][3] =
{{{1, 1, 1},
	{1, 0, 1},
	{1, 0, 1},
  {1, 0, 1},
	{1, 1, 1}},
 {{0, 1, 0},
	{0, 1, 0},
	{0, 1, 0},
  {0, 1, 0},
	{0, 1, 0}},
 {{1, 1, 1},
	{0, 0, 1},
	{1, 1, 1},
  {1, 0, 0},
	{1, 1, 1}},
 {{1, 1, 1},
	{0, 0, 1},
	{0, 1, 1},
  {0, 0, 1},
	{1, 1, 1}},
 {{1, 0, 1},
	{1, 0, 1},
	{1, 1, 1},
  {0, 0, 1},
	{0, 0, 1}},
 {{1, 1, 1},
	{1, 0, 0},
	{1, 1, 1},
  {0, 0, 1},
	{1, 1, 1}},
 {{1, 1, 1},
	{1, 0, 0},
	{1, 1, 1},
  {1, 0, 1},
	{1, 1, 1}},
 {{1, 1, 1},
	{0, 0, 1},
	{0, 0, 1},
  {0, 0, 1},
	{0, 0, 1}},
 {{1, 1, 1},
	{1, 0, 1},
	{1, 1, 1},
  {1, 0, 1},
	{1, 1, 1}},
 {{1, 1, 1},
	{1, 0, 1},
	{1, 1, 1},
  {0, 0, 1},
	{0, 0, 1}}};

void DigitalClock::refreshDisplay(){
	int sec = getTime(SEC);
	int min = getTime(MIN);
	int hour = getTime(HOUR);
	int clock_display_width(12);
	int centering_offset;
	int term_width;
	int term_height;

	std::tie(term_width, term_height) = gatherTerminalStats();

	if(hour >= 10){
		clock_display_width += 3;
	}

	centering_offset = (int)(term_width / 2);
	centering_offset -= (int)(clock_display_width / 2);

	for(unsigned int i = 1; i <= 5; ++i){
		for(unsigned int j = 0; j < centering_offset; ++j){
			std::cout << " ";
		}

		if(hour >= 10){
			std::cout << getDisplayDigitRow((int)(hour / 10), i);
			std::cout << " ";
			std::cout << getDisplayDigitRow(hour % 10, i);
		}else{
			std::cout << getDisplayDigitRow(hour, i);
		}

		std::cout << " ";

		if(i == 2 || i == 4){
			std::cout << draw_character;
		}else{
			std::cout << " ";
		}

		std::cout << " ";
		std::cout << getDisplayDigitRow((int)(min / 10), i);
		std::cout << " ";
		std::cout << getDisplayDigitRow(min % 10, i);
		std::cout << "\n";
	}

	if(getShowDate()){
		drawDate();
	}
}

std::string DigitalClock::getDisplayDigitRow(unsigned int number, unsigned int row) const{
	std::string rowstr = "";

	if(!(row >= 1 && row <= 5 && number >= 0 && number <= 9)){
		throw 101;
	}

	row -= 1;

	for(unsigned int i = 0; i < 3; ++i){
		if(digits[number][row][i]){
			rowstr += draw_character;
		}else{
			rowstr += ' ';
		}
	}

	return rowstr;
}
