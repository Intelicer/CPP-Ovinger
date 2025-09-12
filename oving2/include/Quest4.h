#pragma once
#include <iostream>

using namespace std;

class Quest4 {
private:
	/*
		Wrong systax:
		int a = 5;
		int& b;
		int* c;
		c = &b;
		*a = *b + *c;
		&b = 2;
	*/
	int a = 5;
	int& b = a; // most initilize a reference of an varaible, cant create referance without initilizing it.
	int* c; // define a pointer

public:
	void doQuest();

};