#include <functional>
#include <iostream>

// here std::function define and store function pointer

// std::function method that returns a bool and takes two int parameters
bool validate(int x, int y, std::function<bool(int, int)> fcn);


int foo()
{
	return 5;
}

int goo()
{
	return 6;
}

int main()
{
	// declare function pointer that returns an int and takes no parameters
	std::function<int()> fcnPtr;

	// fcnPtr now points to function goo
	fcnPtr = goo;

	// call the function just like normal
	std::cout << fcnPtr();
}
