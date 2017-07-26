#include <iostream>
#include <vector>
#include <string>
#include <array>

std::array<int, 3> myarray; // declare an integer array with length 3

std::array<int, 5> myarray1 = { 9,7,5,3,1 }; // initialization list

std::array<int, 5> myarray2{ 9,7,5,3,1 }; // uniform initialization

// BAD std::array<int, > iArray = { 9,7,5,3,1 }; illegal, array length must be provided



void printLength(const std::array<double, 5> &myarray)
{
	std::cout << "length: " << myarray.size() << "\n";
}

int main()
{
	std::array<int, 5> myarray3;
	myarray3 = { 0,2,3,4,5 };
	myarray3 = { 4,5,2 }; // okay, element 3 and 4 are set to zero
	// BAD myarray3 = { 4,5,2,3,4,2 }; //  not allowed, too many elements in initializer list!

	std::cout << myarray3[1];

	myarray3[2] = 6;

	myarray3.at(2) = 4;
	// BAD myarray3.at(9) = 2; // array element 9 is invalid, will throw error

	std::array<double, 5> myDarray{ 9.0, 7.2, 5.4, 3.6, 1.8 };
	std::cout << "length: " << myDarray.size() <<"\n";

	//CALL printLength()
	printLength(myDarray);

	for (auto &element : myDarray)
	{
		std::cout << element << ' ';
	}

}


