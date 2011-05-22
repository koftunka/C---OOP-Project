#ifndef CIRCLE_T
#define CIRCLE_T

#include "stdafx.h"
#include "Shapes.h"

class Circle : public Shapes{
public:
	Circle::Circle();
	Circle::Circle(double);

	bool setSide(int, double);
	double getSide();

	double getPerimeter();
	double getArea();
	string getClassName();

private:
	Side radius;

};
#endif