#pragma once
#include <iostream>

using namespace std;


/**
 * @brief Demonstrates correct syntax for references and pointers
 *
 * This class corrects common C++ syntax errors related to references and pointers.
 *
 * @warning Original erroneous code:
 * @code
 * int a = 5;
 * int& b;          // Error: reference must be initialized
 * int* c;          // Uninitialized pointer
 * c = &b;          // Error: cannot take address of uninitialized reference
 * *a = *b + *c;    // Error: 'a' is not a pointer, cannot dereference
 * &b = 2;          // Error: cannot assign to address-of operator
 * @endcode
 *
 * @note Corrections Applied:
 * - References must be initialized upon declaration
 * - Proper pointer declaration and usage
 * - Correct syntax for value assignment vs address operations
*/
class Quest4 {
private:

	int a = 5;
	int& b = a; // most initilize a reference of an varaible, cant create referance without initilizing it.
	int* c; // define a pointer

public:

	/**
	 * @brief Demonstrates correct reference and pointer operations
	 *
	 * Shows proper syntax for:
	 * - Reference assignment and usage
	 * - Pointer initialization and dereferencing
	 * - Value assignments vs address operations
	 * - Relationship between variables, references, and pointers
	*/
	void doQuest();

};