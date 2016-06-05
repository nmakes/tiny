/*
	Tiny Language
	Copyright (c) 2016 Naveen Venkat | All Rights Reserved

	Warning: The following content is licensed under a Creative Commons 
	Attribution-NonCommercial-NoDerivatives 4.0 International License. No part
	of the product is in the public domain.

	If you don't agree with the	terms in EULA, destroy any copy of the software 
	immediately.

	Visit serverprocessor.wordpress.com/tiny to learn more.
*/

#ifndef __TINY_H
#define __TINY_H
#endif

#include <stdio.h>
#include <stdlib.h>

#define TINY_RAMBUFF 1024 // 1 kB

char* _P = (char*)malloc(TINY_RAMBUFF);
enum {open, locked} TINY_MODE;

void _O()
{
	printf("%c", *_P);
}

void _I()
{
	scanf("%c", _P);
}

void _U()
{
	if(TINY_MODE && *_P<127)
	{
		(*_P)++;
	}
	else if (!TINY_MODE)
	{
		(*_P)++;
	}
}

void _D()
{
	if(TINY_MODE && *_P>-128)
	{
		(*_P)--;
	}
	else if(!TINY_MODE)
	{
		(*_P)--;
	}
}

void _L()
{
	_P--;
}

void _R()
{
	_P++;
}

void TINY_INIT()
{
	TINY_MODE = locked;
	for(int i=1; i<=TINY_RAMBUFF; i++)
	{
		*(_P+i-1)=0;
	}
}

#define LOOP while(*_P)
#define CDV *_P
#define DP _P
#define O _O();
#define I _I();
#define U _U();
#define D _D();
#define L _L();
#define R _R();

/*
	VERSION: 0.1

	CHANGELOG:
		v0.1:
			- Made the Primitive Backbone.
			- Byte wise Data pointer 
			- up, down, left, right, output, input, loop control
			- TINY_RAMBUFF set to 1024 by default
			- TINY_MODE set to locked by default
			- CDV & DP variables
			- TINY_INIT function to take initial steps (resets all data values and sets TINY_MODE locked)
*/