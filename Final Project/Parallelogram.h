#ifndef PAR_T
#define PAR_T
#include "stdafx.h"
#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral 
{
public:
	Parallelogram();
	Parallelogram(double, double, double);
	void setHeight(double);
	double getPerimeter();
	double getArea();
	string getClassName();
private:

	Side height;




};
#endif
