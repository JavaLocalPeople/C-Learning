#include <string>
#include <iostream>

class Foo
{
private:
	void DoA()
	{
		// code to A
	}
public:
	Foo()
	{
		DoA();
	}

	Foo(int nValue)
	{
		DoA();
		// code to B
	}
};
