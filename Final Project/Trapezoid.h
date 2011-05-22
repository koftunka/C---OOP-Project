#ifndef TRAP_T
#define TRAP_T
#include "stdafx.h"
#include "Quadrilateral.h"

class Trapezoid : public Quadrilateral
{
public:
	Trapezoid();
	Trapezoid(double, double, double, double, double);
	double getArea();
	void setHeight(double);
	string getClassName();
private:
	Side height;
};
#endif