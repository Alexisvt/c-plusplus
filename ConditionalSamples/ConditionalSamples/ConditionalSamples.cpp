// ConditionalSamples.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name = "";
	string message = "";

	cout << "Tell me your name: ";
	getline(cin, name);

	if (name.compare("Alexis") == 0)
	{
		message = "You are awesome";
	}

	cout << "Hello " << name << endl << message;

	return 0;
}

