#include "../../include/Quest3.h"

void Quest3::doQuest() {
	cout << "type a word with 5 character" << "\n";
	cin >> text;
	while (*pointer != search_for) {
		*pointer = search_for; // value of the pointer changes to `e` from search_for
		pointer++;
	}
}