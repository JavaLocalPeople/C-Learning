#include <iostream>
#include <cassert>

class Stack {
	int m_array[10];
	int m_tracker;
public:
	void reset()
	{
		for (int i = 0; i < 10; ++i)
		{
			m_array[i] = 0;
		}
		m_tracker = 0;
	}

	bool push(int value)
	{
		if (m_tracker == 10)
		{
			return false;
		}
		else {
			m_array[m_tracker++] = value;
			return true;
		}
	}

	int pop()
	{
		assert(m_tracker > 0);
		return m_array[--m_tracker];
	}

	void print()
	{
		std::cout << "( ";
		for (int i = 0; i < m_tracker; ++i)
		{
			std::cout << m_array[i] << ' ';
		}
		std::cout << ")\n";
	}
};

int main()
{
	Stack stack;
	stack.reset();

	stack.print();

	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();

	return 0;
}
