#include "../../include/Quest1.h"

void Quest1::display() {

	cout <<"Variable i: " << this->i << "\n";
	
	cout << "Variable j: " << this->j << "\n";

	cout << "Pointer p: address =  " 
		 << this->p  << ", value stored: " 
		 << *(this->p) << "\n";

	cout << "Pointer q: address =  " 
		 << this->q  << ", value stored: " 
		 << *(this->q) << "\n";
}

void Quest1::doQuest_B() {
	*(this->p) = 7; //value of pointer p turns to 7
	*(this->q) += 4; //value of the pointer q adds 4 to its current value so it will turn 
	*(this->q) = *(this->p) + 1;
	p = q; // pointer p will now equal poninter q so it will point now to j
}