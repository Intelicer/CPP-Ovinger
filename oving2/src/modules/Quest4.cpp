#include "../../include/Quest4.h"

void Quest4::doQuest() {
	this->c = &this->b; // because c is a pointer must get an adress
	cout << "a = " << this->a
		<< " b = " << this->b
		<< " c = " << this->c
		<< "\n";

	this->a = this->b + *c; // changing value of a btw: a and b isnt pointers so dont add *
	// b value changes by changing a because b is a referance of a
	cout << "a = " << this->a
		<< " b = " << this->b
		<< " c = " << this->c
		<< "\n";
	b = 2; // any edit on b applies to a because its a reference of a
	cout << "a = " << this->a
		<< " b = " << this->b
		<< " c = " << this->c
		<< "\n";
}