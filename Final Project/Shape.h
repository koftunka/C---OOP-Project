#ifndef SHAPE_T
#define SHAPE_T
#include "Shapes.h"
#include "Quadrilateral.h"
#include "Circle.h"
#include "Triangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "Trapezoid.h"
#include "LessThanZero.h"
#include <string>
class Shape {
public:
	Shape();
	Shapes *shape[10];
	void createShape(int, char&);
	void loadInterface();
	void clearInput();
	bool isValid(double);

	char choice, startOver;
	double val;
	int index;
	int i;
};
#endif