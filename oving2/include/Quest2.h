#pragma once
#include <iostream>

using namespace std;

/*
	char* line = nullptr;   // or char *line = 0;
	strcpy(line, "Dette er en tekst");

	Cant point to nullptr cause it gives an undefined,
	because nullptr isnt a value stored in memory and means
	by that empty space. so the program will crash.

	A solution that could be applied is writen down
*/
class Quest2 {

private:

	char* line = new char[30];



public:

	void doQuest();


};