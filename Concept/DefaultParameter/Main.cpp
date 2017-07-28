#include <array>
#include <iostream>

void printValues(int x, int y = 10)
{
	std::cout << "x: " << x << "\n";
	std::cout << "y: " << y << "\n";

}

void printValue1(int x = 10, int y = 20, int z = 30)
{
	std::cout << "Values: " << x << " " << y << " " << z << '\n';
}

int main()
{
	printValues(1); // y will use default parameter of 10
	printValues(3, 4); // y will use user-supplied value 4
	printValue1(1, 2, 3);
	printValue1(1, 2);
	printValue1(1);
	printValue1();
}
