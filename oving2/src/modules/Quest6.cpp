#include "../../include/Quest6.h"

void Quest6::findSum(const int* table, int length) {
	if (length < 0) {
		cout << "cant do length with negative value" << "\n";
	}
	else if(length > 20) {
		cout << "cant do length with number higher that the size of table" << "\n";
	}
	else {
		for (int i=0; i < length; i++) {
			this->sum += table[i];
		}
	}
};

int Quest6::getSum() const {
	return this->sum;
}