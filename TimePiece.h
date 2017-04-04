#ifndef TIMEPIECE_
#define TIMEPIECE_

#include <ctime>

enum timeframe_t {SEC, MIN, HOUR};

class TimePiece {
private:
	bool clock24h = false;
	unsigned int terminal_width = 0;
	unsigned int terminal_height = 0;
	void gatherTerminalStats();
public:
	unsigned int getTime(timeframe_t timeframe) const;
	virtual void refreshDisplay();
};

#endif
