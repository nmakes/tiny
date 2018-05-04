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

#ifndef __TINY_H
#define __TINY_H

#include <stdio.h>
#include <stdlib.h>

#define TINY_RAMBUFF 1024 // 1 kB

char * _P;

enum {open, locked} TINY_MODE;

void _O()
{

	if(_P==NULL)
	{
		printf("TINY.h ERROR: Please call TINY_INIT() before applying any operation on the tape.")
	}

	printf("%c", *_P);
}

void _I()
{

	if(_P==NULL)
	{
		printf("TINY.h ERROR: Please call TINY_INIT() before applying any operation on the tape.")
	}

	scanf("%c", _P);
}

void _U()
{

	if(_P==NULL)
	{
		printf("TINY.h ERROR: Please call TINY_INIT() before applying any operation on the tape.")
	}

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

	if(_P==NULL)
	{
		printf("TINY.h ERROR: Please call TINY_INIT() before applying any operation on the tape.")
	}

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

	if(_P==NULL)
	{
		printf("TINY.h ERROR: Please call TINY_INIT() before applying any operation on the tape.")
	}

	_P--;
}

void _R()
{

	if(_P==NULL)
	{
		printf("TINY.h ERROR: Please call TINY_INIT() before applying any operation on the tape.")
	}

	_P++;
}

void TINY_INIT()
{
	TINY_MODE = locked;

	_P = (char*) malloc(sizeof(char) * TINY_RAMBUFF);

	int i;
	for(i=1; i<=TINY_RAMBUFF; i++)
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
#define TM void

/*
	VERSION: 0.2

	CHANGELOG:
		v0.2:
			- Added support for turing machine definitions (TM => void)
			- Converted TINY_RAMBUF to long long int, to make it mutable
		v0.1:
			- Made the Primitive Backbone.
			- Byte wise Data pointer
			- up, down, left, right, output, input, loop control
			- TINY_RAMBUFF set to 1024 by default
			- TINY_MODE set to locked by default
			- CDV & DP variables
			- TINY_INIT function to take initial steps (resets all data values and sets TINY_MODE locked)
*/
#endif