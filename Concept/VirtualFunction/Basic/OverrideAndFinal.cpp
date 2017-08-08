class A
{
public:
	virtual const char* getName() { return "A"; }
};

class B : public A
{
public:
	// note use of final specifier on following line -- that makes this function no longer overridable
	virtual const char* getName() override final { return "B"; }
};

class C : public B
{
public:
	// compile error: overrides B::getName(), which is final
	//virtual const char* getName() override { return "C"; }
};
