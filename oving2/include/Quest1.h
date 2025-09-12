#pragma once
#include <iostream>

using namespace std;
/**
 * @brief Demonstrates basic pointer operations and variable manipulation
 *
 * This class exercises fundamental pointer concepts including:
 * - Pointer initialization and assignment
 * - Dereferencing pointers
 * - Pointer arithmetic and value manipulation
 */
class Quest1 {
private:
	int i = 3;
	int j = 5;
	int* p = &i;
	int* q = &j;

public: 
	/**
	 * @brief Displays current values of variables and their pointer references
	 *
	 * Outputs the current state of variables i, j and their corresponding
	 * pointer values to demonstrate pointer-variable relationships.
	*/
	void display();

	/**
	 * @brief Performs pointer manipulation exercises
	 *
	 * Demonstrates various pointer operations including:
	 * - Swapping pointer assignments
	 * - Modifying values through pointers
	 * - Understanding pointer vs value semantics
	 */
	void doQuest_B();
};