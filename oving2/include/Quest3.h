#pragma once
#include <iostream>

using namespace std;



/**
 * @brief Demonstrates array bounds checking and safe character searching
 *
 * This class illustrates common pitfalls in array manipulation and pointer arithmetic.
 *
 * @warning Original problematic approach:
 * The original implementation had several critical issues:
 * 1. Infinite loop potential when search character ('e') is not found
 * 2. Buffer overflow - pointer moves beyond array bounds
 * 3. Data corruption - overwrites characters instead of just searching
 *
 * @details Problem Analysis:
 * - Loop condition: while (*pointer != search_for)
 * - If 'e' is not in input, pointer increments past text[4]
 * - Results in undefined behavior and potential crash
 * - Assignment *pointer = search_for modifies input data
 */
class Quest3 {
private:

	char text[5];
	char* pointer = text; //here the pointer sets as default to start of array
	char search_for = 'e';


public:
	/**
	 * @brief Demonstrates unsafe character searching with bounds issues
	 *
	 * This method reads user input and attempts to find/replace characters.
	 *
	 * @warning Current implementation has critical flaws:
	 * - No bounds checking leads to potential buffer overflow
	 * - Infinite loop if search character not found
	 * - Modifies input data instead of read-only search
	 *
	 * @note For safe implementation, add bounds checking:
	 * @code
	 * while (pointer < text + 4 && *pointer != search_for) {
	 *     pointer++;  // Move without modifying
	 * }
	 * @endcode
	 */
	void doQuest();
};