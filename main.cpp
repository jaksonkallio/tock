#include <iostream>
#include <memory>
#include "TimePiece.h"
#include "DigitalClock.h"

int main(){
	std::unique_ptr<TimePiece> tock;

	tock = std::make_unique<DigitalClock>();

	tock->refreshDisplay();
	
	return EXIT_SUCCESS;
}
