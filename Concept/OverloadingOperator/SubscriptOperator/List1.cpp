#include <iostream>
#include <cassert>
class IntList
{
private:
	int m_list[10];
public:
	int& operator[] (const int index);
};

int& IntList::operator[] (const int index)
{
	assert(index >= 0 && index < 10);
	return m_list[index];
}

int main()
{
	IntList *list = new IntList;
	(*list)[2] = 3;
	delete list;

	return 0;
}
