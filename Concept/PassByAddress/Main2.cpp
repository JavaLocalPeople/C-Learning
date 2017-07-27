// derefence and change will change the value because 2 pointer (function setToSix and main) point to the same address

#include <iostream>

void setToSix(int *tempPtr)
{
	*tempPtr = 6;
}

int main()
{
	int five = 5;
	int *ptr = &five;

	std::cout << *ptr;

	setToSix(ptr);

	if (ptr)
	{
		std::cout << *ptr;
	}
	else {
		std::cout << " ptr is null";
	}

	return 0;
}
