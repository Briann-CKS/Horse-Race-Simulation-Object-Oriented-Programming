//horse.h

#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

#include <iostream>

// Declare Horse class
class Horse {
	private:
		int position;
	public:
		Horse ();
		void advance ();
		int getPosition();
}; // end Horse class

#endif

