#include "../../include/Commodity.h"

Commodity::Commodity(const char* name_, int id, double price) {
	if (((sizeof(this->name) - 1) < 0) || ((sizeof(this->name) - 1) > 20)) {
		cout << "name cant be more that 20 char or lower than 0" << "\n";
	}
	else {
		strncpy(this->name, name_, sizeof(this->name) - 1);
		this->name[sizeof(this->name) - 1] = '\0';
		this->id = id;
		this->price = price;
	}
}

char* Commodity::get_name() {
	return this->name;
}

int Commodity::get_id() {
	return this->id;
}

double Commodity::get_price(double quantity) {
	return this->price * quantity;
}


void Commodity::set_price(double price) {
	this->price = price;
}

double Commodity::get_price_with_sales_tax(double quantity) {
	return this->price * quantity * 1.25;
}