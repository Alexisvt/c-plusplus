// WritingTextFiles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
	// Using ofstream class
	//ofstream outFile;

	fstream outFile;

	string outputFileName = "text.txt";

	//outFile.open(outputFileName);
	outFile.open(outputFileName, ios::out);

	if (outFile.is_open())
	{
		outFile << "Hello there" << endl;
		outFile << "123" << endl;
		outFile << "Other line" << endl;
		outFile << "End of Line" << endl;
	}
	else
	{
		cout << "Could not create file: " << outputFileName << endl;
	}

	cout << "Task finished";
	return 0;
}

