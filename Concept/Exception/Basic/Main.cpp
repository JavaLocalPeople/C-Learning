
#include <iostream>
#include <string>

int main()
{
	try {
		throw - 1;
	}
	catch (int x)
	{
		std::cerr << "We caught an int exception with value: " << x << std::endl;
	}
	catch (double) // no variable name since we don't use the exception itself in the catch block below
	{
		// Any exceptions of type double thrown within the above try block get sent here
		std::cerr << "We caught an exception of type double" << std::endl;
	}
	catch (const std::string &str) // catch classes by const reference
	{
		// Any exceptions of type std::string thrown within the above try block get sent here
		std::cerr << "We caught an exception of type std::string" << std::endl;
	}

	std::cout << "Continuing on our merry way\n";
}
