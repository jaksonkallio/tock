#ifndef DIGITALCLOCK_
#define DIGITALCLOCK_

#include <string>
#include "TimePiece.h"

class DigitalClock: public TimePiece {
private:
	std::string getDisplayDigitRow(unsigned int number, unsigned int row) const;
	static bool const digits[10][5][3];
public:
	void refreshDisplay();
};

bool const digits[10][5][3] = 
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
#endif
