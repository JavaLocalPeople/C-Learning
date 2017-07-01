#include <iostream>

using namespace std;

class LinkedList {

	// Struct inside the class linkedlist
	struct Node {
		int value;
		Node *next;
		Node *pre;
	};

// public member
private:
	//  this is the private member variable. It is just a pointer to the first Node
	Node *head;
	Node *tail;
public:

	// constructor
	LinkedList()
	{
		head = NULL;
		tail = NULL;
	}

	void insertBeg(int val)
	{
		Node *ptr = new Node();
		ptr->value = val;
		ptr->next = head;
		head = ptr;
	}

	void printList()
	{
		Node *n = head;
		if (n == NULL) // no Node condition
		{
			cout << "Too bad, no Node in your LinkedList and please insert something first." << endl;
		}
		while (n != NULL)
		{
			cout << n->value << " " << endl;
			n = n->next;
		}
		
	}

};

int main()
{
	LinkedList list;

	list.insertBeg(5);
	list.insertBeg(20);
	list.insertBeg(30);

	list.printList(); // output 30 20 5
	
	return 0;
}
