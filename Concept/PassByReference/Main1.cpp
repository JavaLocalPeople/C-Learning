#include <iostream>
#include <math.h>    // for sin() and cos()

void getSinCos(double degrees, double &sinOut, double &cosOut)
{
	const double pi = 3.14159265358979323846;
	double radians = degrees * pi / 180.0;
	sinOut = sin(radians);
	cosOut = cos(radians);
}

int main()
{
	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	std::cout << "The sin is " << sin << '\n';
	std::cout << "The cos is " << cos << '\n';

	return 0;
}
// BAD
//void foo(const int &x) // x is a const reference
//{
//	x = 6;  // compile error: a const reference cannot have its value changed!
//}
