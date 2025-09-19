#include "../../include/Quest4.h"

Quest4::read_words() {
    cout << "Write 3 words: ";
    if (!(cin >> this->word1 >> this->word2 >> this->word3)) {
        throw invalid_argument("Failed to read the three words");
    }
}

Quest4::build_sentence() {
    this->sentence = this->word1 + " " + this->word2 + " " + this->word3 + ".";
    cout << "Sentence: " << this->sentence << endl;
}

Quest4::print_lengths() {
    cout << "length of word1: " << this->word1.length() << endl;
    cout << "length of word2: " << this->word2.length() << endl;
    cout << "length of word3: " << this->word3.length() << endl;
    cout << "length of sentence: " << this->sentence.length() << endl;
}

Quest4::copy_and_modify() {
    this->sentence2 = this->sentence;
    if (sentence2.length() > 12) {
        this->sentence2[10] = 'x';
        this->sentence2[11] = 'x';
        this->sentence2[12] = 'x';
    }
    cout << "original: " << this->sentence << endl;
    cout << "modified: " << this->sentence2 << endl;
}

Quest4::print_sentence_start() {
    string sentence_start;
    if (this->sentence.length() >= 5) {
        sentence_start = this->sentence.substr(0, 5);
    }
    else {
        sentence_start = this->sentence;
    }
    cout << "sentence: " << this->sentence << endl;
    cout << "first five symbols: " << sentence_start << endl;
}

Quest4::contains_hallo() {
    if (this->sentence.find("hallo") != string::npos) {
        cout << "\"hallo\" found in sentence." << endl;
    }
    else {
        cout << "\"hallo\" wasnt found in sentence." << endl;
    }
}

Quest4::find_occurrences_of_er() {
    size_t pos = this->sentence.find("er");
    if (pos == string::npos) {
        cout << "Couldnt find any \"er\"." << endl;
    }
    while (pos != string::npos) {
        cout << "\"er\" found er in position: " << pos << endl;
        pos = this->sentence.find("er", pos + 1);
    }
}