// main.cpp

#include <iostream>
#include "race.h"
#include "horse.h"
#include <time.h> 
#include <cstdlib>

int main ()
{
	int seed;
	std::cout << "Please enter a random seed: " << std::endl;
	std::cin >> seed;
	srand (seed);
	
	Race race;

	race.start();

	return 0;
}
