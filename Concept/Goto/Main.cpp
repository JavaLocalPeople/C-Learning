#include <iostream>
#include <cmath> // for sqrt() function

int main()
{
	double x;
tryAgain:
	std::cout << "Enter a non-negative number: ";
	std::cin >> x;

	if (x < 0.0)
		goto tryAgain;

	std::cout << "The sqrt of " << x << " is " << sqrt(x) << std::endl;
	return 0;
}
