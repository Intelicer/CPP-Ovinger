#pragma once
#include <iostream>

using namespace std;


/*
The problem is that this loop only stops when it finds an 'e'.
If the input string contains no 'e', the pointer will keep
incrementing past the end of the array. Once it moves beyond
(sizeof(text) - 1), it goes out of bounds, causing undefined
behavior possible infinite loop that leeds to a crash.

Also since *pointer = search_for overwrites characters with 'e',
this code modifies the input instead of just searching.
*/
class Quest3 {
private:

	char text[5];
	char* pointer = text; //here the pointer sets as default to start of array
	char search_for = 'e';


public:
	void doQuest();
};