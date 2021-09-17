//horse.h

#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

#include <iostream>

class Horse {
	private:
		int position;
	public:
		Horse ();
		void advance ();
		int getPosition();
};

#endif

