/*
	Tiny Language
	Copyright (c) 2016 Naveen Venkat | All Rights Reserved

	Warning: The following content is licensed under a Creative Commons 
	Attribution-NonCommercial-NoDerivatives 4.0 International License. No part
	of the product is in the public domain and may not be used without attribution.

	If you don't agree with the terms in EULA, destroy any copy of the software 
	immediately.

	Visit serverprocessor.wordpress.com/tiny to learn more.
*/

#ifndef __TYUT_H
#define __TYUT_H

#include "tiny.h"

// utility functions can be added here

void ty_showtape()
{
	int i=0;
	for(i=0; i<TINY_RAMBUFF; i++)
	{
		printf("%c", _P[i]);
	}
}

void ty_writestr(const char * str)
{
	// todo
}

#endif