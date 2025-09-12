#pragma once
#include <iostream>

using namespace std;

/**
 * @brief Demonstrates relationships between variables, pointers, and references
 *
 * This class illustrates how variables, pointers, and references can all
 * refer to the same memory location and how modifications through any
 * of these access methods affect the shared data.
 */
class Quest5 {
private:
	double number;
	double* pNum = &number; //point to number address
	double& rNum = number; //Reference to  number


public:

	/**
	 * @brief Demonstrates three ways to access the same memory location
	 *
	 * Shows how modifying data through:
	 * - Direct variable access (number = 4)
	 * - Pointer dereferencing (*(pNum) = 2)
	 * - Reference access (rNum = 5)
	 *
	 * All operations modify the same memory location, demonstrating
	 * that pointers and references are just different ways to access
	 * the same underlying variable.
	 *
	 * @note Output shows how all three access methods refer to the same data
	 */
	void doQuest();

};