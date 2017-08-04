
#include <cassert>
#include <iostream>
#include <string>

class Mystring
{
private:
	std::string m_s;
public:
	Mystring(std::string s) 
	{
		m_s = s;
	}

	std::string operator()(int start, int end);
};

std::string Mystring::operator()(int start, int end)
{
	assert(start < m_s.length());
	std::string ret;
	for (int i = 0; i < end; ++i)
		ret += m_s[start + i];
	return ret;
}

int main()
{
	Mystring string("Hello, world!");
	std::cout << string(7, 5); // start at index 7 and return 5 characters

	return 0;
}
