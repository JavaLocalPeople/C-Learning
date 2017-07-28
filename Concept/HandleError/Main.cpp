#include <iostream>
#include <string>

void printString(const char *cstring)
{
	if (cstring)
	{
		std::cout << cstring;
	}
}

int main()
{
	std::string hello = "Hello, world!";
	std::cout << "Enter a letter: ";

	char ch;
	std::cin >> ch;

	int index = hello.find(ch);
	if (index != -1) {
		std::cout << ch << " was found at index " << index << '\n';
	}
	else {
		std::cout << ch << " wasn't found" << '\n';

	}
	// handle case where find() failed to find the character in the string

}
