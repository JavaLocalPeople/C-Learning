#include <iostream>
#include <string>
#include <utility>

template<class T>
void swap(T& a, T& b)
{
	T tmp{ std::move(a) }; // invokes copy constructor
	a = std::move(b); // invokes copy assignment
	b = std::move(tmp); // invokes copy assignment
}

int main()
{
	std::string x{ "abc" };
	std::string y{ "de" };

	std::cout << "x: " << x << '\n';
	std::cout << "y: " << y << '\n';

	swap(x, y);

	std::cout << "x: " << x << '\n';
	std::cout << "y: " << y << '\n';

	return 0;
}
