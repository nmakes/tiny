/*
	Trees
	Copyright (c) 2016 Naveen Venkat | All Rights Reserved

	Warning: The following content is licensed under a Creative Commons 
	Attribution-NonCommercial-NoDerivatives 4.0 International License. No part
	of the product is in the public domain and may not be used without attribution.

	If you don't agree with the terms in EULA, destroy any copy of the software 
	immediately.

	Visit github.com/nmakes/trees to learn more.

*/

#ifndef __TREES_H
#define __TREES_H
#endif

#include <iostream>
#include <string>
using namespace std;

class bintree
{
	string data;
	bintree* l, *r;

	public:

	bintree(string d)
	{
		data = d;
		l = r = NULL;
	}

	bintree* peekl(int steps=1)
	{
		bintree* t = l;
		for(int i=1; i<=steps; i++)
		{	
			if(t==NULL)
			{
				break;
			}
			else
			{
				t=t->l;
			}
		}
		return t;
	}
	bintree* peekr(int steps = 1)
	{
		bintree* t = r;
		for(int i=1; i<=steps; i++)
		{	
			if(t==NULL)
			{
				break;
			}
			else
			{
				t=t->r;
			}
		}
		return t;
	}
	string* val()
	{
		return &data;
	}

};

typedef bintree* leaf;

/*
	vocabulary
	----------
	parent, grand parent, ancestor
	child, sibling, cousins, descendent
	root, leaf
	height, depth

	horizontal print format
	-----------------------
	root [ <subtree1>, <subtree2>, <subtree3> ]

	vertical print format
	---------------------
	+ root
	|--+ <subtree1>
	|--+ <subtree2>
	|--+ <subtree3>
	|--|--+ <subsubtree1>
	|--|--+ <subsubtree2>
	|--+ <subtree4

*/