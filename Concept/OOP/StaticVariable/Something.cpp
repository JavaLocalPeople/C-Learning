#include <string>
#include <iostream>
#include <cassert>

class Something
{
public:
	static int s_value;
};

int Something::s_value = 1;

// Output
// 2
// 2		   
int main()
{
	Something first;
	Something second;

	// s_value is shared between all objects of the class
	first.s_value = 2;

	std::cout << first.s_value << '\n';
	std::cout << second.s_value << '\n';
}
