#ifndef SIDE_T
#define SIDE_T

class Side
{

public:
		Side();
		Side(double);
		bool setSide(double);
		double getSide();
		
private:
		double magnitude;

};
#endif