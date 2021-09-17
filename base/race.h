
//race.h

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <iostream>
#include "horse.h"

const int num = 5;

class Race {
	private:
		Horse h[num];
		int length;
	public:
		Race();
		Race(int length);
		void printLane(int horseNum);
		void start();
};

#endif
