#ifndef RECT_T
#define RECT_T
#include "Parallelogram.h"
class Rectangle : public Parallelogram
{
public:
	Rectangle();
	Rectangle(double, double);

	double getArea();
	string getClassName();

};
#endif