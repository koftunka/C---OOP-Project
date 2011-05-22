#ifndef SHAPES_T
#define SHAPES_T

#include "stdafx.h"
#include <iostream>
#include <vector>
#include "Side.h"

using namespace std;

class Shapes {
	public:
		Shapes();   
		
		virtual bool setSide(int, double);
		virtual double getArea() = 0;
		virtual double getPerimeter();
		virtual bool shapeExists(string);
		virtual string getClassName();
};
#endif

