#include <iostream>
#include <string>

class Stupid
{
private:
public:
	void operator[] (std::string index);
};

void Stupid::operator[] (std::string index)
{
	std::cout << index;
}


int main()
{
	Stupid stupid;
	stupid["Hello, world!"];

	return 0;
}
