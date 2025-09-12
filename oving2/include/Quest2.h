#pragma once
#include <iostream>

using namespace std;

/**
 * @brief Demonstrates safe dynamic memory allocation for C-style strings
 *
 * This class addresses common pointer pitfalls when working with C-style strings.
 *
 * @warning Original problematic code:
 * @code
 * char* line = nullptr;   // or char *line = 0;
 * strcpy(line, "Dette er en tekst");
 * @endcode
 *
 * The above code would crash because strcpy() cannot copy to a nullptr.
 * nullptr doesn't point to allocated memory, causing undefined behavior.
 *
 * @note Solution implemented: Pre-allocate memory using 'new char[30]'
 * to provide valid memory address for string operations.
 */
class Quest2 {

private:

	char* line = new char[30];



public:
	/**
	 * @brief Performs safe string copy operation
	 *
	 * Demonstrates proper use of strcpy() with pre-allocated memory.
	 * Copies "Dette er en tekst" to the allocated memory and displays it.
	 */
	void doQuest();


};