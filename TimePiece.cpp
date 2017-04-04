#include <ctime>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>
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

void TimePiece::gatherTerminalStats(){
	struct winsize w;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	terminal_width = w.ws_col;
	terminal_height = w.ws_row;
}

void TimePiece::refreshDisplay(){

}
