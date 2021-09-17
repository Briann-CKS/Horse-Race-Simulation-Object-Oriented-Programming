// main.cpp

#include <iostream>
#include "race.h"
#include "race.cpp"
#include "horse.h"
#include "horse.cpp"

int main ()
{
	int seed;
	int winner;
	std::cout << "Please enter a random seed: "
	std::cin >> seed;
	srand (seed);
	
	Race race;

	race.Race (seed);

	return 0;
}
