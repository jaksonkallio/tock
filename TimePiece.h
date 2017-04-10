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
	bool center_vert = true;
	bool center_hor = true;
protected:
	std::tuple<int, int> gatherTerminalStats();
public:
	unsigned int getTime(timeframe_t timeframe) const;
	virtual void refreshDisplay();
	bool getShowDate() const;
	bool getCenterVert() const;
	bool getCenterHor() const;
	void drawDate() const;
};

#endif
