#ifndef TIMEPIECE_
#define TIMEPIECE_

#include <ctime>
#include <tuple>

enum timeframe_t {SEC, MIN, HOUR};

class TimePiece {
private:
	bool clock24h = false;
	bool show_date = true;
	bool show_sec = true;
	unsigned int terminal_width = 0;
	unsigned int terminal_height = 0;
protected:
	std::tuple<int, int> gatherTerminalStats();
public:
	unsigned int getTime(timeframe_t timeframe) const;
	virtual void refreshDisplay();
	bool getShowDate() const;
	void drawDate() const;
};

#endif
