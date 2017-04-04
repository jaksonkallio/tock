#include <iostream>
#include "TimePiece.h"
#include "DigitalClock.h"

int main(){
	TimePiece tock;
	tock = DigitalClock();

	tock.refreshDisplay();
	
	return EXIT_SUCCESS;
}
