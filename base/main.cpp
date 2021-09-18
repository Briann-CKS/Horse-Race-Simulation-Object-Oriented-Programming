// main.cpp

// Include all the libraries needed
#include <iostream>
#include "race.h"
#include "horse.h"
#include <time.h> 
#include <cstdlib>

// Start main
int main ()
{
	// Declare an integer to store seed number
	int seed;

	// Prompt user to input seed number and store that in seed variable
	std::cout << "Please enter a random seed: " << std::endl;
	std::cin >> seed;
	
	// Call srand() function using the input seed number
	srand (seed);
	
	// Declare a variable of Race class 
	Race race;

	// Start race by calling start() function
	race.start();

	return 0;
} // end main
