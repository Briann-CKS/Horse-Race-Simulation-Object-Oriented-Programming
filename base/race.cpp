// race.cpp

#include <iostream>
#include "race.h"
#include "horse.h"

const int TrackLength = 15;
const int DefNum = 5;

Race::Race()
{
	length = TrackLength;
}


Race::Race (int length)
{
	Race::length = length;
}


void Race::printLane (int horseNum)
{
	int num = h[horseNum].getPosition();
	std::cout << "\n\nasdfasdf\n\n";
	for (int i = 0; i < num; i++)
	{
		std::cout << ".";
	}
		
	std::cout << horseNum;
		
	for (int i=0; i < TrackLength-num-1; i++)
	{
		std::cout << ".";
	}
	std::cout << std::endl;
	

}


void Race::start()
{
	int winner = -1;
	bool not_end = true;
	while (not_end)
	{
		for (int i = 0; i < DefNum; i++)
		{
			h[i].advance();
			printLane(i);
			if (h[i].getPosition() == length)
			{
				winner = i;
				//not_end = false;
				//std::cout << "\n" << std::endl;
				//std::cout << "Horse " << i << " wins!\n" << std::endl;
				//break;
			}
		}
		if (winner != -1)
		{
			not_end = false;
			std::cout << "\n" << std::endl;
			std::cout << "Horse " << winner << " wins!\n" << std::endl;
		}
		std::cout << "\n" << std::endl;
		/*	if (h[i].getPosition() == TrackLength)
			{
				not_end = false;
				std::cout << "Horse " << i << " wins!\n" << std::endl;
				//break;
			}
		
		}
		if (not_end) 
		{
			for (int i = 0; i < DefNum; i++)
			{
				printLane(i);
			}
		} */
	}
}
