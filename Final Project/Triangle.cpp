#include "stdafx.h"
#include "math.h"
#include <string>
#include "Triangle.h"

Triangle::Triangle(){}
Triangle::Triangle(int i){}
Triangle::Triangle(int num, double val)
{
	switch (num)
	{
	case 0:
		s1.setSide(val);
		break;
	case 1:
		s2.setSide(val);
		break;
	case 2:
		s3.setSide(val);
		break;
	default:;
	}
}
Triangle::Triangle(double a, double b, double c)
{
	s1.setSide(a);
	s2.setSide(b);
	s3.setSide(c);
}

bool Triangle::setSide(int num, double val)
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
	default:return true;
	}
}

/*(double a, double b, double c)
{
	s1.setSide(a);
	s2.setSide(b);
	s3.setSide(c);
}*/

double Triangle::getSide(int num)
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
	default:
		return 0;
	}
}
double Triangle::getPerimeter()
{
	return s1.getSide()+s2.getSide()+s3.getSide();
}

double Triangle::getArea()
{
	double p;
	double area;
	p = getPerimeter();
	p = p/2;
	area = sqrt( p * ( p - s1.getSide() ) * ( p - s2.getSide() ) * ( p - s3.getSide() ) );
	return area;
}

bool Triangle::shapeExists(string name)
{		
	if (( (s1.getSide()+s2.getSide()) < s3.getSide() ) ||
		( (s2.getSide()+s3.getSide()) < s1.getSide() ) ||
		( (s1.getSide()+s3.getSide()) < s2.getSide() )) 
	{
		cout << "The " << name << " with sides " << s1.getSide() << ", " << s2.getSide() << ", " << s3.getSide()  << " can not exist." << endl;
		return false;
	} else {
		cout << "The " << name << " with sides " << s1.getSide() << ", " << s2.getSide() << ", " << s3.getSide() << " is a valid " << name << "." << endl;
		return true;
	}
}

string Triangle::getClassName()
{
	return "Triangle";
}