#include <array>
#include <iostream>

inline int min(int x, int y)
{
	return x > y ? y : x;
}

int main()
{
	std::cout << (5 > 6 ? 6 : 5) << '\n';
}
