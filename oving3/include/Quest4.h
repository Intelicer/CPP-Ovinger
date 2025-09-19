#pragma once
#include <iostream>
#include <string>
#include <stdexcept>   // for std::invalid_argument


using namespace std;

class Quest4 {
private:
    string word1, word2, word3;
    string sentence;
    string sentence2;

public: 
    // a) Read 3 words from the user
    void read_words();

    // b) make a sentence with spaces and a (.)
    void build_sentence();

    // c) write the length of the words and sentence
    void print_lengths();

    // d) copy sentence &"\n" e) change the char number 10-12 to "x" hvis mulig
    void copy_and_modify();

    // f) Save the first five characters of the sentence
    void print_sentence_start();

    // g) Check if the sentence contains the word "hallo"
    void contains_hallo();

    // h) Find all occurrences of "er"
    void find_occurrences_of_er();
};