class Base
{
public:
	const char* sayHi() { return "Hi"; }

	virtual const char* getName() { return "Base"; }

	virtual int getValue() = 0; // pure virtual function

	//int doSomething() = 0; // Compile error: can not set non-virtual functions to 0
};
