#ifndef QUAD_T
#define QUAD_T
#include "Shapes.h"

class Quadrilateral: public Shapes 
{

public:
	Quadrilateral::Quadrilateral();
	Quadrilateral::Quadrilateral(double, double, double, double);


	double getPerimeter();
    virtual double getArea();

	bool setSide(int, double);
	double getSide(int num);
	
	bool shapeExists(string);
private:
	Side s1;
	Side s2;
	Side s3;
	Side s4;

};
#endif
