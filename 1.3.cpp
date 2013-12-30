/* Design an algorithm and write code to remove the duplicate characters in a string without using any additional buffer. NOTE: One or two additional variables are fine. An extra copy of the array is not.
   FOLLOW UP
   Write the test cases for this method.
 *
 * one by one, test if each char is the same with one char it's prefix, delete it(copy from its suffix to this position and overwrite this char)
 */

#include <iostream>
#include <cstring>
using namespace std;

char* dedumplicate(char* str)
{
	for (int i = 0; i <= strlen(str); i++)
	{
		for (int j = 0; j <= i - 1; j++)
		{
			if (*(str + i) == *(str + j))
			{
				strcpy(str+i, str+i+1);
				i--;
				break;
			}
			else{
			
			}
			
		}
	}
	return str;
}

int main (void)
{
	string str = "";
	cout << "input the string to be duplicated" << endl;
	getline(cin, str);
	char * cStr = (char*)str.c_str();

	cout << "result:" << endl << dedumplicate(cStr);
	
	return 0;
}
