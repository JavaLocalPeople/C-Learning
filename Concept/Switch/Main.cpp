#include <iostream>

enum Colors
{
	COLOR_BLACK,
	COLOR_WHITE,
	COLOR_RED,
	COLOR_GREEN,
	COLOR_BLUE
};

void printColor(Colors color)
{
	switch (color)
	{
		case COLOR_BLACK:
			std::cout << "Black";
			break;
		case COLOR_WHITE:
			std::cout << "White";
			break;
		case COLOR_RED:
			std::cout << "Red";
			break;
		case COLOR_GREEN:
			std::cout << "Green";
			break;
		case COLOR_BLUE:
			std::cout << "Blue";
			break;

	}
}

int main()
{
	printColor(COLOR_GREEN);

	return 0;
}
