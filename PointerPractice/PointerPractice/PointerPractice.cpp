// PointerPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void PrintName(string);

int main()
{
	int age = 0;
	int* agePtr = &age;

	cout << "Type your age:\n";
	cin >> age;

	string messageBuilder = "Your age is: " + to_string(*agePtr) + "\n";

	PrintName(messageBuilder);

	system("pause");

    return 0;
}

void PrintName(string message)
{
	cout << message;
}

