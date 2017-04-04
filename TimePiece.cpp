#include <ctime>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
#include <tuple>
#include <iostream>
#include "TimePiece.h"

unsigned int TimePiece::getTime(timeframe_t timeframe) const{
	time_t now = time(0);
	tm *ltm = localtime(&now);

	if(timeframe == SEC){
		return ltm->tm_sec;
	}else if(timeframe == MIN){
		return ltm->tm_min;
	}else if(timeframe == HOUR){
		int hour = ltm->tm_hour;

		if(!clock24h && hour > 12){
			hour -= 12;
		}

		return hour;
	}else{
		throw 100;
	}

	return 0;
}

std::tuple<int, int> TimePiece::gatherTerminalStats(){
	struct winsize w;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	return std::make_tuple(w.ws_col, w.ws_row);
}

void TimePiece::refreshDisplay(){
	std::cout << "refresh display for TimePiece called.\n";
}
