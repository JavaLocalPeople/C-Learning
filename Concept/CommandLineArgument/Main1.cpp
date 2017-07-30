#include <iostream>
#include <string>
#include <sstream> // for std::stringstream
#include <cstdlib> // for exit()

int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		if (argv[0])
			std::cout << "Usage: " << argv[0] << " <number>" << '\n';
		else
			std::cout << "Usage: <program name> <number>" << '\n';

		exit(1);
	}

	std::stringstream convert(argv[1]); // set up a stringstream variable named
	//convert, initialized with the input from argumentv[1]

	int myint;
	if (!(convert >> myint)) // do the conversion
		myint = 0; // if conversion fails, set myint to a default value

	std::cout << "Got integer: " << myint << '\n';

	return 0;
}
