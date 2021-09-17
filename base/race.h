
//race.h

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <iostream>

class Race {
	private:
		Horse h[];
		int length;
	public:
		Race();
		Race(int length);
		void printLane(int horseNum);
		void start();
};

#endif
