#include "stdafx.h"
#include "Parallelogram.h"
using namespace std;
Parallelogram::Parallelogram(){}
Parallelogram::Parallelogram(double a, double b, double h): Quadrilateral(a, b, a, b)
{
	setHeight(h);
}
void Parallelogram::setHeight(double h)
{
	height.setSide(h);
}
double Parallelogram::getArea()
{
	return getSide(2)*height.getSide();
}
double Parallelogram::getPerimeter()
{
	return getSide(1)*2 + getSide(2)*2;
}
string Parallelogram::getClassName()
{
	return "Parallelogram";
}