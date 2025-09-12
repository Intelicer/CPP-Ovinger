#pragma once
#include <iostream>

using namespace std;

/**
 * @brief Demonstrates array pointer arithmetic and partial array processing
 *
 * This class shows how to work with array segments using pointer arithmetic
 * to calculate sums of different portions of an array.
 */
class Quest6 {

private:
	int sum = 0;
public:

	/**
	 * @brief Calculates sum of array elements starting from given position
	 *
	 * Uses pointer arithmetic to process a specific segment of an array.
	 * This method demonstrates:
	 * - Working with array pointers
	 * - Processing partial arrays with specified length
	 * - Pointer arithmetic for array traversal
	 *
	 * @param table Pointer to the starting element of array segment
	 * @param length Number of elements to process from the starting position
	 *
	 * @note Used in main() with different array segments:
	 * - q6_1.findSum(numbers, 10): First 10 elements (1-10)
	 * - q6_2.findSum(numbers + 9, 5): Elements 10-14 (10-14)
	 * - q6_3.findSum(numbers + 15, 5): Elements 16-20 (16-20)
	 */
	void findSum(const int *table, int length);


	/**
	 * @brief Returns the calculated sum
	 *
	 * @return const int Current sum value stored in the object
	 */
	int getSum() const;

};