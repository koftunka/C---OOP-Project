#ifndef SQU_T
#define SQU_T
#include "Rectangle.h"

class Square : public Rectangle
{
public:
	Square();
	Square(double);
	string getClassName();
};
#endif