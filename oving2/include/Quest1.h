#pragma once
#include <iostream>

using namespace std;

class Quest1 {
private:
	int i = 3;
	int j = 5;
	int* p = &i;
	int* q = &j;

public: 
	void display();
	void doQuest_B();
};