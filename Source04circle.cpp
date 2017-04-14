/////////////////////
// Miquette Orren
// CS172 EX06_04
///////////////

#include <iostream>
#include <cmath>
#include <string>
#include "CircleWithConstantMemberFunctions.h"
#include "CircleWithConstantMemberFunctions.cpp"
using namespace std;

int main()
{
	Circle one;
	one.setRadius(3.2);
	Circle two;
	two.setRadius(7.8);

	bool operator == (Circle one, Circle two);
	bool operator < (Circle one, Circle two);
	bool operator <= (Circle one, Circle two);
	bool operator >= (Circle one, Circle two);
	bool operator > (Circle one, Circle two);
	bool operator != (Circle one, Circle two);

	return 0;
}