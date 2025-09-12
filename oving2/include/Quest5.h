#pragma once
#include <iostream>

using namespace std;

class Quest5 {
private:
	double number;
	double* pNum = &number;
	double& rNum = number;


public:

	void doQuest();

};