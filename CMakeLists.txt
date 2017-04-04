project(tock)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++14")

add_executable(
	tock
	main.cpp
	TimePiece.cpp
	DigitalClock.cpp
)
