#include "2.1.cpp"
#include <cstdlib>

#include <iostream>
using namespace std;

#define N 10



int main (void)
{
	List* pL = (Node*)malloc(sizeof(Node)*N); 

	
	Node* current = pL;
	for (int i = 0; i <= N - 2; i++)
	{
		current -> aChar = 'a' + i;
		current -> next = current + sizeof(Node);
		current = current -> next;
	}
	current -> next = NULL;

	List* aList = initList(N);
	goThroughList(aList);	
	cout  << endl;
	
	goThroughList(reverseList(aList));

	char* a = new char;
	*a = 'w';
	
	delete a;
	cout << *a << endl;

	free(pL);
	cout << pL->aChar<< endl;
	//List* l = current;

	//	reverselist(pL);
	//goThroughlist(pL);
	//	goThrough(l);
	
	return 0;
}
