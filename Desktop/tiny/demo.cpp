/*
	Tiny Language Demo.
*/

#include "tiny.h"
#include <iostream>

void reset() // Reduces the CDV to 0
{
	if(TINY_MODE)
	{
		TINY_MODE=open;
		LOOP { U }
		TINY_MODE=locked;
	}
	else
	{
		LOOP { U }
	}

}

void shiftr() // Shifts CDV to the next cell
{
	LOOP { R U L D } // and not DRUL
}

void shiftl() // Shift CDV to the previous cell
{
	LOOP { L U R D } // and not DLUR
}

void copyr() // Copies CDV to the next cell
{
	LOOP { R U R U L L D }
	R R
	LOOP { L L U R R D }
	L L
}

void copyl() // Copies CDV to the previous cell
{
	LOOP { L U L U R R D }
	L L
	LOOP { R R U L L D }
	R R
}

void set(int n)
{
	reset();
	for(int i=1; i<=n; i++) U
}

void move() // moves CDV number of cells to the
{

}

int main()
{
	TINY_INIT(); 
	std::cout << *DP << ' ' << *(DP+1) << std::endl;
	return 0;
}