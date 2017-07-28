#include <vector>
#include <iostream>

void printStack(const std::vector<int> &stack)
{
	for (const auto &element : stack)
	{
		std::cout << element << ' ';
	}
	std::cout << "(cap " << stack.capacity() << " length " << stack.size() << ")\n";
}

int main()
{
	std::vector<int> stack;

	// set the capacity to (at least 5)
	stack.reserve(5);

	printStack(stack);

	stack.push_back(5);
	printStack(stack);

	stack.push_back(3);
	printStack(stack);

	stack.push_back(2);
	printStack(stack);

	std::cout << "top: " << stack.back() << '\n'; // back() returns the last element

	stack.pop_back(); // pop_back() back pops an element off the stack
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);
}
