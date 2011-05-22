#include "stdafx.h"
#include "Circle.h"

Circle::Circle(){}

Circle::Circle(double r){
	radius.setSide(r);
 }

bool Circle::setSide(int i, double r)
{
	return radius.setSide(r);
}

double Circle::getSide()
{
	return radius.getSide();
}

double Circle::getPerimeter()
{
	return 2*3.14*radius.getSide();
}
double Circle::getArea()
{
	return 3.14*radius.getSide()*radius.getSide();
}
string Circle::getClassName()
{
	return "Circle";
}
