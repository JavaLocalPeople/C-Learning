// changing the address will not change the value. point to 2 different value in function setToNull and main. 

#include <iostream>

void setToNull(int *tempPtr)
{
	tempPtr = nullptr;
}

int main()
{
	int five = 5;
	int *ptr = &five;

	std::cout << *ptr;

	setToNull(ptr);

	if (ptr)
	{
		std::cout << *ptr;
	}
	else {
		std::cout << " ptr is null";
	}

	return 0;
}
