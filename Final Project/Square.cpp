#include "stdafx.h"
#include "Square.h"

Square::Square(){};
Square::Square(double a): Rectangle(a, a)
{}
string Square::getClassName()
{
	return "Square";
}

