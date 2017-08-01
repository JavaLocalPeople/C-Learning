#include <string>
#include <iostream>
#include <cassert>

class Something
{
public:
	static int s_value;
};

int Something::s_value = 1;

// Output
// 2		   
int main()
{
	// note: we're not instantiating any objects of type Something

	Something::s_value = 2;
	std::cout << Something::s_value << '\n';
	return 0;
}
