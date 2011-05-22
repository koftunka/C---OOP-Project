#ifndef LTZ_T
#define LTZ_T
#include "stdafx.h"
#include <stdexcept>

using namespace std;

class LessThanZero : public runtime_error
{
public:
		LessThanZero() : runtime_error("The value must be greater than zero.") {}
};
#endif 