#include "stdafx.h"
#include <string>
#include <cmath>
#include "Quadrilateral.h"
using namespace std;
Quadrilateral::Quadrilateral()
{}
Quadrilateral::Quadrilateral(double a, double b, double c, double d)
{
	s1.setSide(a);
	s2.setSide(b);
	s3.setSide(c);
	s4.setSide(d);
}

bool Quadrilateral::setSide(int num, double val)
{
	switch (num)
	{
	case 1:
		return s1.setSide(val);
		break;
	case 2:
		return s2.setSide(val);
		break;
	case 3:
		return s3.setSide(val);
		break;
	case 4:
		return s4.setSide(val);
		break;
	default:
		return false;
	}
}

double Quadrilateral::getSide(int num)
{
	switch (num)
	{
	case 1:
		return s1.getSide();
		break;
	case 2:
		return s2.getSide();
		break;
	case 3:
		return s3.getSide();
		break;
	case 4:
		return s4.getSide();
		break;
	default:
		return 0;
	}
}
double Quadrilateral::getPerimeter()
{
	return s1.getSide()+s2.getSide()+s3.getSide()+s4.getSide();
}

double Quadrilateral::getArea()
{
	return 1;
}

bool Quadrilateral::shapeExists(string name)
{		
	if (name == "Trapezoid")
	{
		if ( (s1.getSide()+s3.getSide()) < (abs( s4.getSide() - s2.getSide())) )
		{
			cout << "The " << name << " with sides " << s1.getSide() << ", " << s2.getSide() << ", " << s3.getSide()  << ", " <<s4.getSide() << " can not exist." << endl;
			return false;
		}
	}
	if (( (s1.getSide()+s2.getSide()+s3.getSide()) < s4.getSide() ) ||
		( (s2.getSide()+s3.getSide()+s4.getSide()) < s1.getSide() ) ||
		( (s1.getSide()+s3.getSide()+s4.getSide()) < s2.getSide() ) ||
		( (s1.getSide()+s2.getSide()+s4.getSide()) < s3.getSide() )) 
	{
		cout << "The " << name << " with sides " << s1.getSide() << ", " << s2.getSide() << ", " << s3.getSide()  << ", " <<s4.getSide() << " can not exist." << endl;
		return false;
	} else {
		cout << "The quadrilateral with sides " << s1.getSide() << ", " << s2.getSide() << ", " << s3.getSide()  << ", " <<s4.getSide() << " is a valid " << name << "." << endl;
		return true;
	}
}