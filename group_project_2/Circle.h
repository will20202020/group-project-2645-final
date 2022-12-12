#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#define PI 3.14159265

class Circle {
public:
	// only accessors and mutators are public in this example
	Circle();
	Circle(double length);
	void set_radius(float radius);
	void set_diameter(float diameter);

	float get_area();
	float get_circumference();
	float get_diameter();
	float get_radius();



private:
	// member variables are private and set/get via accessor/mutator
	float _radius;
	float _area;

	float _diameter;
	float _circumference;



};

#endif