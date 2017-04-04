#ifndef DIGITALCLOCK_
#define DIGITALCLOCK_

#include "TimePiece.h"

class DigitalClock: public TimePiece {
private:

public:
	void refreshDisplay();
};

#endif
