//horse.cpp

// Include all the libraries needed
#include <iostream>
#include "horse.h"

//time.h and cstdlib libraries for srand() and rand() functions
#include <time.h> 
#include <cstdlib>

// Initialize constructor for Horse class
Horse::Horse()
{
	Horse::position = 0;	
} // end Horse class constructor

//Initialize advance() method
void Horse::advance()
{
	int coin = rand () % 2;
	if (coin == 1)
	{
		position++;
	}
} // end advance() method

// Initialize getPosition() method
int Horse::getPosition()
{
	return position;
} // end getPosition method
