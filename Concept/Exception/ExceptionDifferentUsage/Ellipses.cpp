#include <iostream>

int main()
{
	try {
		throw 5;
	}

	catch (double x)
	{
		std::cout << "We caught an exception of type double: " << x << '\n';
	}
	catch (...) {
		std::cout << "We caught an exception of an undetermined type\n";
	}
}
