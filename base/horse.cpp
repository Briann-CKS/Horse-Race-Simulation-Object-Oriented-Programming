//horse.cpp

#include <iostream>
#include "horse.h"

void Horse::Horse()
{
	

};

void advance()
{

	
	bool not_end = true;
	while (not_end)
	{	
		int coin = rand () % 2;
		if (coin == 1)
		{
			horse0_defpos++;
		}
		
		coin = rand () % 2;
		if (coin()==1)
        	{
           		horse1_defpos++;
        	}
	
		coin = rand () % 2;
		if (coin()==1)
        	{
			horse2_defpos++;
        	}

		coin = rand () % 2;
        	if (coin()==1)
        	{
			horse3_defpos++;
        	}

		coin = rand () % 2;
	        if (coin()==1)
		{
			horse4_defpos++;
		}

		//Print the track of each horse
		printLane (0);
		printLane (1);
		printLane (2);
		printLane (3);
		printLane (4);
		std::cout << "\n" << std::endl; 
	}
};

int Horse::getPosition()
{
	return position;
};
