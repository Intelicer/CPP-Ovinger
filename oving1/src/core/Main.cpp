// oving1.cpp : Defines the entry point for the application.
//

#include "../../include/Temp.h"
#include <string>

using namespace std;

using namespace std;
int main() {

	//Question 1_A
	//Temp q_A;
	//q_A.userWrite5Temp();
	//cout << q_A.getTempUnder10() << "\n";
	//cout << q_A.getTempBetween10_20() << "\n";
	//cout << q_A.getTempHigherThan20() << "\n";

	Temp q_B;
	int sizeT = q_B.getLength();

	//Alternativ 1 from Array testing out
	//double temp = { 1,2,3,20,14 };
	//q_B.readTemperaturesArray(temps, size(temps));
	//cout << q_B.getTempUnder10() << "\n";
	//cout << q_B.getTempBetween10_20() << "\n";
	//cout << q_B.getTempHigherThan20() << "\n";

	//Alternativ 2 from file
	double* tempeatursArray = new double[sizeT];
	q_B.readTemperaturesFromFile(tempeatursArray, sizeT);
	cout << "Temps under 10: " << q_B.getTempUnder10() << "\n";
	cout << "Temps between 10 and 20: "<< q_B.getTempBetween10_20() << "\n";
	cout << "Temps over 20: " <<q_B.getTempHigherThan20() << "\n";


	return 0;

}
