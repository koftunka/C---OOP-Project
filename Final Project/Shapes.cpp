#include "stdafx.h"
#include <string>
#include "Shapes.h"

Shapes::Shapes(){}

bool Shapes::setSide(int i, double val){
	return true;
}

double Shapes::getPerimeter(){
	return 1;
}

double Shapes::getArea(){
	return 1;
}

bool Shapes::shapeExists(string name){
	return true;
}
string Shapes::getClassName()
{
	return "Shapes";
}