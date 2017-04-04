#ifndef TIMEPIECE_
#define TIMEPIECE_

#include <ctime>

enum timeframe_t {SEC, MIN, HOUR};

class TimePiece {
private:
	bool clock24h = false;
public:
	unsigned int getTime(timeframe_t timeframe) const;
};

#endif
