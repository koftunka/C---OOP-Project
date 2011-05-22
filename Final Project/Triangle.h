#ifndef TRIA_T
#define TRIA_T
#include <string>
#include "Shapes.h"

class Triangle: public Shapes {
public:
	Triangle::Triangle();
	Triangle::Triangle(int);
	Triangle::Triangle(int, double);
	Triangle::Triangle(double, double, double);


	double getPerimeter();
	double getArea();

	bool setSide(int, double);
	double getSide(int);
	string getShapeName();
	bool shapeExists(string name);
	string getClassName();
private:
	Side s1;
	Side s2;
	Side s3;

};
#endif
