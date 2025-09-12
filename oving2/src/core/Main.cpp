#include "../../include/Quest1.h"
#include "../../include/Quest2.h"
#include "../../include/Quest3.h"
#include "../../include/Quest4.h"
#include "../../include/Quest5.h"
#include "../../include/Quest6.h"

#include <cstring>

using namespace std;

int main() {

	cout << "========== Quest 1 ==========" << "\n";

	
	//Quest1 q1;

	//cout << "A: " << "\n";
	//q1.display();
	//cout << "\nB: " << "\n";
	//q1.doQuest_B();
	//q1.display();


	cout << "========== Quest 2 ==========" << "\n";

	//Quest2 q2;
	//q2.doQuest();

	cout << "========== Quest 3 ==========" << "\n";

	//Quest3 q3;
	//q3.doQuest();

	cout << "========== Quest 4 ==========" << "\n";

	//Quest4 q4;
	//q4.doQuest();

	cout << "========== Quest 5 ==========" << "\n";

	//Quest5 q5;
	//q5.doQuest();

	cout << "========== Quest 6 ==========" << "\n";
	int numbers[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	Quest6 q6_1, q6_2, q6_3;
	q6_1.findSum(numbers, 10);
	cout << q6_1.getSum() << "\n";
	q6_2.findSum(numbers + 9, 5);
	cout << q6_2.getSum() << "\n";
	q6_3.findSum(numbers+15, 5);
	cout << q6_3.getSum() << "\n";




	return 0;
}
