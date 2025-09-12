
#pragma once
#include <iostream>

using namespace std;


class Circle {
private:
    double radius;
    const double pi = 3.141592;


public:
    Circle(double radius_);
    int get_area() const;
    double get_circumference() const;

};