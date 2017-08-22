#include <cstdarg>
#include <iostream>

void pr_ints(int n ...)
{
	va_list(arglist);
	va_start(arglist, n);
	for (int i = 0; i < n; ++i)
	{
		std::cout << va_arg(arglist, int) << std::endl;
	}
	va_end(arglist);
}

int main() {
	int i = 400;
	int j = 50;
	pr_ints(4, 100, 200, i, i + j);
}
