// race.cpp

// Include all the libraries needed
#include <iostream>
#include "race.h"
#include "horse.h"

// Declare and initialize constant integers for the track length and the default number of horses
const int TrackLength = 15;
const int DefNum = 5;

// Initialize constructor of class Race
Race::Race()
{
	length = TrackLength; // Set track length to the length attribute
} // end constructor


// Initialize another constructor of class Race with parameter of an int
Race::Race (int length)
{
	Race::length = length; // Set the length value of the parameter to length attribute
} // end constructor


// Initialize printLane method 
void Race::printLane (int horseNum)
{
	int num = h[horseNum].getPosition(); // get position of the horse
	for (int i = 0; i < num; i++)
	{
		std::cout << ".";
	}
	
	if (num != TrackLength)
	{		
		std::cout << horseNum;
	}
	
	for (int i=0; i < TrackLength-num-1; i++)
	{
		std::cout << ".";
	}
	std::cout << std::endl;
} // end printLane method


// Initialize start() function of Race class
void Race::start()
{
	int winner = -1;
	bool not_end = true;
	while (not_end)
	{
		for (int i = 0; i < DefNum; i++)
		{
			h[i].advance(); // Call advance() function
			printLane(i); // Print the lane of every horse in the for loop
			if (h[i].getPosition() == length)
			{
				winner = i; // Set the horse num to winner after it reaches the end point
			}
		}
		if (winner != -1)
		{
			not_end = false;
			std::cout << "\n" << std::endl;
			// Print out the winner of the horse
			std::cout << "Horse " << winner << " wins!" << std::endl;
		}
		std::cout << "\n" << std::endl;
	}
} // end start() function
