#include <array>
#include <iostream>

int foo();
double goo();
int hoo(int x);

int(*fcnPtr1)() = foo;
//BAD int(*fcnPtr2)() = goo; wrong -- return types don't match!
double(*fcnPtr4)() = goo; // Okay
//BAD fcnPtr1 = hoo; // wrong -- fcnPtr1 has no parameters, but hoo() does
int(*fcnPtr3)(int) = hoo;

int foo(int x)
{
	return x;
}

int main()
{
	int(*fcnPtr)(int) = foo; // assign fcnPtr to function foo

	// explicit dereference
	(*fcnPtr)(5); // call function foo(5) through fcnPtr

	// implicit deference
	fcnPtr(5);
}
