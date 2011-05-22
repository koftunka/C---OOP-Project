#include "stdafx.h"
#include "Trapezoid.h"

Trapezoid::Trapezoid(){}
Trapezoid::Trapezoid(double a, double b, double c, double d, double h): Quadrilateral(a, b, c, d)
{
	setHeight(h);
}
void Trapezoid::setHeight(double h)
{
	height.setSide(h);	
}

double Trapezoid::getArea()
{
	return height.getSide() * ( (getSide(2)+getSide(4))/2 );
}
string Trapezoid::getClassName()
{
	return "Trapezoid";
}