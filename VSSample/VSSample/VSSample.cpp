// VSSample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

// std = Standard Library
using namespace std;

int main()
{
	// insertion operator
	cout << "Hola mundo" << endl << 2 + 2 << endl;

	int i = 4.3;

	cout << i << endl;

	// to produce a floating point result we need to make sure that
	// one of the digit is a point number
	float j = 9.0 / 5;

	cout << j << endl;

	return 0;
}