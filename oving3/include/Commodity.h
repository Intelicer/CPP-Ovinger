#include <iostream>
#include <cstring>

using namespace std;

class Commodity {
private:
	char name[20] = {};
	int id = 0;
	double price = 0.0;

public:
	Commodity(const char* name_, int id, double price);

	char* get_name();

	int get_id();

	double get_price(double quantity = 1 );

	void set_price(double price);

	double get_price_with_sales_tax(double quantity);
};