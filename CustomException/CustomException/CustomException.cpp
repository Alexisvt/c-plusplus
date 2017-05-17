// CustomException.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <exception>

using namespace std;

class MyException : public exception {
public:
	// Note about const throw, not ideal to use, avoid it
	// That disable the function to throw an exception
	// Inside the parenthesis of throw we can define what can throw, ej bad_alloc
	virtual const char* what() const throw() {
		return "Something bad happened!";
	}
};

class Test {
public:
	void goesWrong() {
		throw MyException();
	}

};

int main()
{
	try {
		Test test;
		test.goesWrong();
	}
	catch (MyException &e) {
		cout << e.what() << endl;
	}

	cout << "Still running" << endl;
	return 0;
}

