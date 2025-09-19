#include "../../include/Circle.h"


Circle::Circle(double radius_) {
	this->radius = radius_;
}
int Circle::get_area() const {
	return (this->pi * this->radius *this->radius);
}

double Circle::get_circumference() const {
	double circumference = 2.0 * this->pi * this->radius;
	return circumference;
}