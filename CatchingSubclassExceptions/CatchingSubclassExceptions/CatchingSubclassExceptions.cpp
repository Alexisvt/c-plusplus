// CatchingSubclassExceptions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void goesWrong() {
	bool error1Detected = true;
	bool error2Detected = false;

	if (error1Detected)
	{
		throw bad_alloc();
	}

	if (error2Detected)
	{
		throw exception();
	}

}

int main()
{
	try
	{
		goesWrong();
	}
	// be careful with the order of the catch blocks since bac_alloc is an
	// subclass of exception we can catch it with the second catch block if we invert
	// the order. This order is right!
	// Subclasses first!
	catch (const bad_alloc &e)
	{
		cout << "Catching bad_alloc: " << e.what() << endl;
	}
	catch (const exception &e) {
		cout << "Catching exception: " << e.what() << endl;
	}

	cout << "Still running";
	return 0;
}

