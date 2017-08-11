
class Base
{
public:
	Base() {}
};

class Derived : public Base
{
public:
	Derived() {}
};

int main()
{
	try
	{
		throw Derived();
	}
	catch (Derived &derived)
	{
		cerr << "caught Derived";
	}
	catch (Base &base)
	{
		cerr << "caught Base";
	}
	

	return 0;
}
