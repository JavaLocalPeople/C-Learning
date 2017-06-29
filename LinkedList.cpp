// For now I have functions for inserting at the begin and at the end.

#include <iostream>

using namespace std;

struct Node {
	int data; 
	Node* link;
};

void insertBeg(Node** head, int d)
{
	Node *ptr = new Node();
	ptr->data = d;
	ptr->link = *head;
	*head = ptr;
}

void deleteBeg(Node** head)
{
	// int value = 0;
	if (*head == NULL)
	{
		cout << "There is no Node, sorry sir cannot delete more in the beginning." << endl;
	}
	else {
		Node* temp = *head;
		// value = temp->data;
		*head = (*head)->link;
		free(temp);
	}
}

void insertEnd(Node** head, int d)
{
	Node *ptr = new Node();
	ptr->data = d;
	ptr->link = NULL;
	if (*head == NULL)
	{
		*head = ptr;
	} else {
		Node *temp = *head;
		while (temp->link != NULL)
		{
			temp = temp->link;
		}
		temp->link = ptr;
	}
}

void printList(struct Node* head)
{

	Node *n = head;
	if (n == NULL)
	{
		cout << "Too bad, no Node and please insert something first." << endl;
	}
	while (n != NULL)
	{
		cout << n->data << " " << endl;
		n = n->link;
	}

}

int main()
{
	struct Node* head = NULL;
	insertEnd(&head, 4);
	insertBeg(&head, 3);
	insertEnd(&head, 2);
	insertEnd(&head, 1);
	insertBeg(&head, 5);
	printList(head); // output 5 3 4 2 1
	deleteBeg(&head);
	cout << "After deleting the beginning Node" << endl;
	printList(head); // output 3 4 2 1
}

