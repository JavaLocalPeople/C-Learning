#include <cmath>
#include <iostream>

double mySqrt(double x)
{
	if (x < 0.0)
		throw "Can not take sqrt of negative number";

	return sqrt(x);
}

int main()
{
	std::cout << "Enter a number: ";
	double x;
	std::cin >> x;

	try {
		std::cout << "The sqrt of " << x << " is " << mySqrt(x) << '\n';
	}
	catch (const char* exception)
	{
		std::cerr << "Error: " << exception << std::endl;
	}
}
