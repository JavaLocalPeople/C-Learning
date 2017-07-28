#include <iostream>
#include <string>

void printString(const char *cstring)
{
	// Only print if cstring is non-null
	if (cstring)
		std::cout << cstring;
	else
		//  cerr writes the error messages on the screen, but it can also be individually redirected to a file.
		std::cerr << "function printString() received a null parameter";
}

int main() {
	std::string hello = "Hello, world!";
	int index;

	do {
		std::cout << "Enter an index: ";
		std::cin >> index;

		// handle case where user enter a non-integer
		if (std::cin.fail()) {
			std::cin.clear(); // reset any error flags
			std::cin.ignore(32767, '\n');
			index = -1;  // ensure index has an invalid value so the loop doesn't terminate
			continue;
		}

	} while (index < 0 || index >= hello.size());  // handle case where user entered an out of range integer

	std::cout << "Letter #" << index << " is " << hello[index] << std::endl;
}
