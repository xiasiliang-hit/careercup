#define N 10
#include <iostream>
using namespace std;

int main(void)
{
	int gNum = 2;
	int pos = 15;

	int array[N];
	
	for (int i = 0; i <= N-1; i++)
		{
			array [i] = i;
		}

	//begin bsearch
	int head = 0;

	int end = N - 1;
	int current = (head + end)/2;

	bool isFound = false;
	
	while (head != end)
		{
			if (array[current] == gNum)
				{
					pos = current;
					break;
				}
			else if	(array[current] < gNum )
				{
					head = current;
					current = (head + end)/2;
				}
			else if (array[current] > gNum)
				{
					end = current;
					current = (head + end)/2;
				}
			else
				{
					
				}			   
		}
	cout << pos;
	return 0;
}
