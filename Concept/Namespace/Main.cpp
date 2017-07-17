//
#include "Mathadd.h" // import BasicMath::add()
#include "Mathsubtract.h" // import BasicMath::subtract()
#include <iostream>
int main(void)
{
	std::cout << BasicMath::add(4, 3) << '\n';
	std::cout << BasicMath::subtract(4, 3) << '\n';

	return 0;
}
