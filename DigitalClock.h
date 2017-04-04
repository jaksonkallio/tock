#ifndef DIGITALCLOCK_
#define DIGITALCLOCK_

#include <string>
#include "TimePiece.h"

class DigitalClock: public TimePiece {
private:
	std::string getDisplayDigitRow(unsigned int number, unsigned int row) const;
public:
	void refreshDisplay();
};

#endif
