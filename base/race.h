//race.h

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <iostream>
#include "horse.h"

// Declare a constant integer to indicate the number of horses in the race
const int num = 5;

// Declare Race class
class Race {
	private:
		Horse h[num];
		int length;
	public:
		Race();
		Race(int length);
		void printLane(int horseNum);
		void start();
}; // end Race class

#endif
