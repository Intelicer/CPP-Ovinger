#include "../../include/Temp.h"

void Temp::userWrite5Temp() {
    double t_number = 0;
    cout << "Write in " << this->length << " temperaturs" << "\n";
    for (int i = 1; i <= this->length; i++) {
        cout << "Temperatur nr " << i << ":";
        cin >> t_number;
        determinNumberCatogery(t_number);
    }
}

int Temp::getTempUnder10() {
    return this->under10;
}

int Temp::getTempBetween10_20() {
    return this->between10_20;
}

int Temp::getTempHigherThan20() {
    return this->higherthan20;
}

void Temp::readTemperaturesFromArray(double temperatures[], int length) {
    for (int i = 0; i < length; i++) {
        determinNumberCatogery(temperatures[i]);
    }
}

void Temp::determinNumberCatogery(double number) {
    if (number < 10) {
        this->under10++;
    }
    else if (number > 20) {
        this->higherthan20++;
    }
    else {
        this->between10_20++;
    }
}

void Temp::readTemperaturesFromFile(double temperatures[], int length) {

    ifstream file("resources/TempFile.txt");  // Try relative path first
            
    if (!file.is_open()) {
        // Try alternative paths if the first one fails
        file.open("../../resources/TempFile.txt");
        if (!file.is_open()) {
            file.open("oving1/resources/TempFile.txt");
            if (!file.is_open()) {      
                cerr << "Error: Could not open file 'TempFile.txt'" << "\n";
                cerr << "Tried paths: resource/TempFile.txt, ../../resource/TempFile.txt, oving1/resource/TempFile.txt" << "\n";
                cerr << "Make sure the file exists and the working directory is correct" << "\n";
                return;
            }
        }
    }

    cout << "File opened successfully!" << "\n";

    for (int i = 0; i < length; i++) {
        if (file >> temperatures[i]) {
            cout << "Read temperature[" << i << "] = " << temperatures[i] << "\n";
            determinNumberCatogery(temperatures[i]);
        }
        else {
            cerr << "Error reading temperature at position " << i << "\n";
            if (file.eof()) {
                cerr << "Reached end of file (only " << i << " temperatures read)" << "\n";
            }
            break;
        }
    }

    file.close();
    cout << "File closed successfully" << "\n";
}

int Temp::getLength() {
    return this->length;
}


