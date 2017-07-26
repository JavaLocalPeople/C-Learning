#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>

void printCString(const char *str)
{
	while (*str != '\0')
	{
		std::cout << *str;
		++str;
	}
}

int main()
{
	printCString("Hello I am here!");

	return 0;
}
