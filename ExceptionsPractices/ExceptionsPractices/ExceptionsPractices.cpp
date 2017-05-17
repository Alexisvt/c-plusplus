// ExceptionsPractices.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class TestClass {
public:
	TestClass(string message) : message(message) {};
	string message;

};

class CanGoWrong {
public:
	CanGoWrong() {
		char *pMemory = new char[999];
		delete[] pMemory;
	}
};

void mightGoWrong()
{
	bool error = true;
	bool error2 = true;
	if (error)
	{
		// uncomment to see how the different catch sentences operate
		// throw 8;
		//throw "Something went wrong";
		//throw string("hola mundo");
		//throw 9.21;
		throw TestClass("ERROR in TestClass");
	}
}

int main()
{

	try
	{
		//mightGoWrong();
		CanGoWrong();
	}
	catch (int e)
	{
		cout << "Error code: " << e << endl;
	}
	catch (char const *e)
	{
		cout << "Error message:" << e << endl;
	}
	catch (string &e)
	{
		cout << "Error message:" << e << endl;
	}
	catch (double e)
	{
		cout << "floating point exception: " << e << endl;
	}
	catch (TestClass &e)
	{
		cout << "TestClass type exception: " << e.message << endl;
	}
	// Catching memory allocation error
	catch (bad_alloc &e) {
		cout << "Caught exception: " << e.what() << endl;
	}

	cout << "Still running" << endl;

	return 0;
}
