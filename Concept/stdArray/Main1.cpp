#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <algorithm>

int main()
{
	std::array<int, 5> myArray{ 7,5,3,2,4 };

	// sort the array forwards
	std::sort(myArray.begin(), myArray.end());
	//    std::sort(myarray.rbegin(), myarray.rend()); // sort the array backwards

	for (const auto &element : myArray)
	{
		std::cout << element << ' ';
	}

	return 0;
}
