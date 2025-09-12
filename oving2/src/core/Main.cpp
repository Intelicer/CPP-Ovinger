#include "../../include/Quest1.h"
#include "../../include/Quest3.h"
#include "../../include/Quest4.h"
#include "../../include/Quest5.h"
#include <cstring>

using namespace std;

int main() {

	cout << "========== Oppgave 1 ==========" << "\n";

	
	Quest1 q1;

	cout << "A: " << "\n";
	q1.display();
	cout << "\nB: " << "\n";
	q1.doQuest_B();
	q1.display();


	cout << "========== Oppgave 2 ==========" << "\n";


	cout << "========== Oppgave 3 ==========" << "\n";

	Quest3 q3;
	q3.doQuest();

	cout << "========== Oppgave 4 ==========" << "\n";

	Quest4 q4;
	q4.doQuest();

	cout << "========== Oppgave 5 ==========" << "\n";

	Quest5 q5;
	q5.doQuest();

	cout << "========== Oppgave 6 ==========" << "\n";

	return 0;
}
