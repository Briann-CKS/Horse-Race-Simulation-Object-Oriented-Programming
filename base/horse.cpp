//horse.cpp

#include <iostream>
#include "horse.h"
#include <time.h>
#include <cstdlib>

Horse::Horse()
{
	Horse::position = 0;	
}

void Horse::advance()
{
	int coin = rand () % 2;
	if (coin == 1)
	{
		position++;
	}
}

int Horse::getPosition()
{
	return position;
}
