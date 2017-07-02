
#include <iostream>

template<class T>
class Node
{
public:
	T data;
	Node<T> * next;
	Node<T>(const T& d) : data(d), next() {}
	Node<T>(const Node<T>& copyNode) : data(copyNode.data), next() {}

private:
	Node<T>& operator=(const Node<T>&);
};

template<class T>
class LinkedList
{

public:
	LinkedList(const LinkedList& LL);
	LinkedList& operator=(LinkedList byValList);
	LinkedList() : head(NULL), tail(NULL) {}
	LinkedList(Node<T> * newNode) : head(newNode), tail(newNode) {}
	~LinkedList();

	Node<T> * head;
	Node<T> * tail;

	void insertBeg(T val);
	void insertEnd(T val);
	void print();
	void printBackwards();
	
};

// deconstructor for the LinkedList
template<class T>
LinkedList<T>::~LinkedList()
{
	Node<T> *curr = head;
	while (head)
	{
		head = head->next;
		delete curr;
		curr = head;
	}
}

template<class T>
void LinkedList<T>::insertBeg(T val)
{
	Node<T> *newNode = new Node<T>(val);
	newNode->next = head;
	head = newNode;
	if (head->next == NULL)
	{
		tail = newNode;
	}
}

template<class T>
void LinkedList<T>::print()
{
	Node<T> *curr = head;
	while (curr)
	{
		std::cout << curr->data << " ";
		curr = curr->next;
	}
	std::cout << "NULL" << std::endl;
}


int main()
{
	LinkedList<char> list1(new Node<char>('a'));
	list1.insertBeg('s');
	list1.print();

	LinkedList<int> list2(new Node<int>(3));
	list2.insertBeg(8);
	list2.print();

}
