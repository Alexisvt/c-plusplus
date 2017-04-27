// ClassSample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	Person(int, string);
	int Age;
	string Name;
	void SayHi();

};


void Person::SayHi()
{
	cout << "Hello: " << Name << endl << "Your age is: " << Age << endl;
}

Person::Person(int age, string name)
{
	Age = age;
	Name = name;
}

int main()
{
	Person p(31, "Alexis");

	p.SayHi();

	system("pause");

	return 0;
}