#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>

void swap(int &a, int &b)
{
   int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 6, b = 8;
	swap(a, b);

	if (a == 8 && b == 6)
		std::cout << "It works!";
	else
		std::cout << "It's broken!";

	return 0;
}
