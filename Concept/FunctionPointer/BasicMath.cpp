#include <iostream>

typedef int(*arithmeticFcn)(int, int);


int getInteger()
{
	std::cout << "Enter an integer: ";
	int x;
	std::cin >> x;
	return x;
}

char getOperation()
{
	char op;

	do
	{
		std::cout << "Enter an operation ('+', '-', '*', '/'): ";
		std::cin >> op;
	} while (op != '+' && op != '-' && op != '*' && op != '/');

	return op;
}

int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}

int multiply(int x, int y)
{
	return x * y;
}

int divide(int x, int y)
{
	return x / y;
}


struct arithmeticStruct {
	char op;
	arithmeticFcn fcn;
};

static arithmeticStruct arithmeticArray[]{
	{ '+', add },
	{ '-', subtract },
	{ '*', multiply },
	{ '/', divide }
};

arithmeticFcn getArithmeticFunction(char op)
{
	for (auto &arith : arithmeticArray)
	{
		if (arith.op == op)
		{
			return arith.fcn;
		}
	}

	return add;
}


int main()
{
	int x = getInteger();
	char op = getOperation();
	int y = getInteger();

	arithmeticFcn fcn = getArithmeticFunction(op);
	std::cout << x << ' ' << op << ' ' << y << " = " << fcn(x, y) << '\n';
	return 0;
}
