#include "stdafx.h"
#include "Rectangle.h"

Rectangle::Rectangle(){}
Rectangle::Rectangle(double a, double b): Parallelogram(a, b, a)
{
}
double Rectangle::getArea()
{
	return getSide(1)*getSide(2);
}
string Rectangle::getClassName()
{
	return "Rectangle";
}
