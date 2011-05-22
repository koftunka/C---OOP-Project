#include "stdafx.h"
#include <iostream>
#include <string>
#include "Side.h"

using namespace std;

	Side::Side(){}//default constructor

	//constructor
	Side::Side(double a) {
		setSide(a);
	}

	bool Side::setSide(double a) {

		if ( a>0 )
			{
				magnitude = a;
				return true;
			}
		else 
			cout << "Invalid input. Value must be greater than 0." << endl;
			return false;
	}

	double Side::getSide() {
		return magnitude;
	}

	