#include "tyut.h"

void main()
{
	TINY_INIT();
	_P[0] = 'a';
	_P[1] = 'a';
	_P[2] = 'a';
	_P[3] = 'a';
	_P[4] = 'a';
	ty_showtape();
}