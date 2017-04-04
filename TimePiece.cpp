#include "TimePiece.h"

time_t TimePiece::getTime() const{
	return time(0);
}
