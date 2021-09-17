// race.cpp

#include <iostream>
#include "race.h"
#include "horse.cpp"

Race::h[] = {0, 1, 2, 3, 4, 5};


void Race::Race()
{
	
};


void Race::Race (int length)
{
	
	start();
	
	

};


void Race::printLane (int horseNum)
{
	int j=0;
	for (int i = 0; i<position; i++)
	{
		horseArr[i] = '.';
		j++;
	}

	horseArr[j] = horseNum;				
	j++;

	for (int i = 0; i< (15-position-1); i++)
	{
		horseArr[j] = '.';
		j++;
	}

	for (int i=0; i<15; i++)
	{
		std::cout << horseArr [i];
	}

	std::cout << std::endl;
}


void Race::start()
{
	Horse::advance();

};
