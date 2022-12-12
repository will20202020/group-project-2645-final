#include "Circle.h"

//try to use the constructor:
Circle::Circle() {
}

// mutator method to set radius
void Circle::set_radius(float radius) { _radius = radius; }
void Circle::set_diameter(float diameter) { _diameter = diameter;}

// accessor method to get area
float Circle::get_area() {
	_area = PI * _radius * _radius;
	return _area;
}

float Circle::get_circumference() {
	_circumference = PI * _diameter;
	return _circumference;
}


