#include "../../include/Quest5.h"

void Quest5::doQuest() {
	this->number = 4;
	cout << this->number << "\n";
	*(this->pNum) = 2;
	cout << *(this->pNum) << "\n";
	this->rNum = 5;
	cout << this->rNum << "\n";

	cout << "number: " << this->rNum
		<< ", pNum: " << *(this->pNum)
		<< ", rNum: " << this->rNum
		<< "\n";
}