#pragma once

#include <iostream>
#include <fstream>

using namespace std;

/**
 * @brief Temperature data analyzer class
 *
 * The Temp class provides functionality to collect, process, and categorize
 * temperature readings from various sources (user input, arrays, or files).
 * It automatically categorizes temperatures into three predefined ranges and
 * maintains counters for statistical analysis.
 * 
 * @note The class is designed to work with exactly 5 temperature readings
 * @note All temperature values are processed as double precision floating point numbers
 */
class Temp {
    private:
        /** @brief Fixed number of temperature readings to process */
        const int length = 5;
                        
        /** @brief Temporary storage for individual temperature value */
        double temp;

        /** @brief Counter for temperatures below 10 degrees */
        int under10 = 0;

        /** @brief Counter for temperatures between 10 and 20 degrees (inclusive) */
        int between10_20 = 0;

        /** @brief Counter for temperatures above 20 degrees */
        int higherthan20 = 0;

        /**
         * @brief Categorizes a temperature value and updates the appropriate counter
         *
         * @param number The temperature value to categorize
         *
         * @details Categorization logic:
         *          - number < 10.0: increments under10
         *          - number > 20.0: increments higherthan20  
         *          - 10.0 <= number <= 20.0: increments between10_20
         * 
         * @note This method modifies the internal state counters
         */
        void determinNumberCatogery(double number);

    public:
        /**
         * @brief Interactively collects 5 temperature readings from user via console
         *
         * Prompts the user to enter exactly 5 temperature values through standard input.
         * Each temperature is immediately categorized and the appropriate counter is updated.
         * The method displays prompts in the format "Temperatur nr X:" for each reading.
         *
         * @pre Standard input stream must be available
         * @post All internal counters (under10, between10_20, higherthan20) are updated
         * 
         * @note Input validation is not performed - invalid input may cause undefined behavior
         * @note The method blocks until all 5 values are entered
         */
        void userWrite5Temp();

        /**
         * @brief Returns the count of temperatures below 10 degrees
         *
         * @return int Number of temperature readings that are less than 10.0
         * 
         * @note This is a simple getter method with no side effects
         */
        int getTempUnder10();

        /**
         * @brief Returns the count of temperatures between 10-20 degrees (inclusive)
         *
         * @return int Number of temperature readings that are >= 10.0 and <= 20.0
         * 
         * @note This is a simple getter method with no side effects
         */
        int getTempBetween10_20();

        /**
         * @brief Returns the count of temperatures above 20 degrees
         *
         * @return int Number of temperature readings that are greater than 20.0
         * 
         * @note This is a simple getter method with no side effects
         */
        int getTempHigherThan20();

        /**
         * @brief Processes temperature data from an array and updates counters
         *
         * @param temperatures Array containing temperature values to process
         * @param length Number of elements to read from the temperatures array
         *
         * @pre temperatures array must contain at least 'length' valid double values
         * @pre length must be >= 0
         * @post All internal counters are updated based on the array data
         *
         * @note Each temperature in the array is processed sequentially
         * @note No bounds checking is performed on the array
         * @note The length parameter overrides the class's internal length constant
         */
        void readTemperaturesFromArray(double temperatures[], int length);

        /**
         * @brief Reads temperature data from file and populates the provided array
         *
         * @param temperatures Array to store the temperature values read from file
         * @param length Number of temperature values to read from the file
         *
         * @pre temperatures array must have capacity for at least 'length' elements
         * @pre Temperature file must contain numeric data (whitespace-separated)
         * @post temperatures array is populated with values read from file
         * @post All internal counters are updated based on the file data
         * @post File is automatically closed after reading
         *
         * @details The method attempts to open the file from multiple paths:
         *          1. "resources/TempFile.txt"
         *          2. "../../resources/TempFile.txt" 
         *          3. "oving1/resources/TempFile.txt"
         * 
         * @note If file cannot be opened, error messages are printed to stderr and method returns
         * @note If EOF is reached before reading 'length' values, reading stops early
         * @note Each successfully read temperature is processed and categorized
         * @note Progress messages are printed to stdout during file operations
         * 
         * @warning No bounds checking is performed on the temperatures array
         * @warning File I/O errors during reading are reported but may leave arrays partially filled
         */
        void readTemperaturesFromFile(double temperatures[], int length);

        /**
         * @brief Returns the fixed number of temperature readings expected by this class
         *
         * @return int The constant value 5
         * 
         * @note This represents the design capacity of the class for temperature analysis
         * @note The returned value corresponds to the private 'length' member variable
         */
        int getLength();
};


