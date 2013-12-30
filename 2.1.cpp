#include "head.h"

typedef struct Node
{
	char aChar;
	Node* next;
} Node, List;


List* initList(int size)
{
	Node* current = NULL;
	for (int i = 0; i <= size - 1; i++)
	{
		Node* n = (Node*)malloc(sizeof(Node));
		if (n == NULL)
		{
			cout << "malloc error in initList" << endl;
		}
		else
		{}
		n -> next = current;
		n -> aChar = 'a' + i;
		current = n;
	}
	List* l = current;
}

void goThroughList(List* pList)
{
	for (Node* current = pList; current != NULL; current = current -> next)
		{
			cout << current -> aChar;
		}
}

List* reverseList(List* head)
{
	Node* pre = NULL;
	Node* current = head;
	Node* ne = current -> next;

	while (ne != NULL)
	{
		current -> next = pre;
		pre = current;
		current = ne;
		ne = ne -> next;
	}
	current -> next = pre;
	return current;
}

void insertNode(Node* node, Node* prev)
{
	
}

void deleteNode(Node* node)
{
	
}
