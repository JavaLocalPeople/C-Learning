#include <iostream>
#include <string>
#include <cstdarg> // needed to use ellipsis

double findAverage(std::string decoder, ...)
{
	double sum = 0;

	// we access tje ellipsis through a va_list
	va_list list;

	va_start(list, decoder);

	int count = 0;
	while (1)
	{
		char codetype = decoder[count];
		switch (codetype)
		{
		default:
		case'\0':
			// cleanup
			va_end(list);
			return sum / count;
		case 'i':
			sum += va_arg(list, int);
			count++;
			break;
		case 'd':
			sum += va_arg(list, double);
			count++;
			break;
		}
	}
}

int main(int argc, char *argv[])
{
	std::cout << findAverage("iiiii", 1, 2, 3, 4, 5) << '\n';
	std::cout << findAverage("iiiiii", 1, 2, 3, 4, 5, 6) << '\n';
	std::cout << findAverage("iiddi", 1, 2, 3.5, 4.5, 5) << '\n';
}
