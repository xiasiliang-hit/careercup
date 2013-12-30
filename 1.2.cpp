/*Write code to reverse a C-Style String. (C-String means that "abcd" is represented as five characters, including the null character.)
 *
 *consider whether momery located is overlaped with the originl string. if newPointer < pointer + length + 1, then overlaped, can not do reverse
 *
 */
 
#include <cstdlib>
#include <stdlib.h>
#include <cstring>
#include <iostream>
using namespace std;

char* reverse(char* str)
{
	char* p = NULL;
	char* newPtr = (char*)malloc(sizeof(char) * (strlen(str)+1)) ;
	char* ptrRetrun = newPtr;
	
	if (newPtr > str + strlen(str))
	{
		p = str + strlen(str) - 1; //not copying the end of the string
		
		while (p != str)
		{
			*newPtr++ = *p--;
		}
		*newPtr = *p;
		*(newPtr + 1) = '\0';  //additionally assign the end char '\0'
	}
	
	else //error, memory overlap
	{}

	return ptrRetrun;
}



char* copy(char* str)
{
	char* p = NULL;
	char* newPtr = (char*)malloc(sizeof(char) * (strlen(str)+1)) ;
	char* ptrRetrun = newPtr;
	
	if (newPtr < str)
	{
		p = str;
		while (*p != '\0')
		{
			*newPtr++ = *p++;
		}
		*newPtr = *p;
	}
	else if (newPtr > str)
	{
		p = str + strlen(str);
		newPtr += strlen(str);

		while (p != str)
		{
			*newPtr-- = *p--;
		}
		*newPtr = *p;
	}
	else //equal, not possible 
	{}

	return ptrRetrun;
}
void test()
{
	char arrayStr[100] = "1234567";
	char* ptrStr = arrayStr;
	
	cout << "arrayStr:"<< sizeof (arrayStr) << "|" <<strlen(arrayStr) << endl
		 << "ptrStr"<< sizeof (ptrStr) << "|" << strlen(ptrStr) << endl; //sizeof(char*) gives the size of pointer(memory address width)

	char a[] = "123456789";
	cout << "sizeof '123456789' array(automatic assign '\0'):" << sizeof(a) << endl;
}

int main(void)
{
	test();
	string str = "";

	while(1)
	{
			
		
	cout << "input the string to replace to be replaced" << endl;
	getline(cin, str);
	char* cstr = (char*)str.c_str();

	char* copyStr = copy(cstr);
	char* reverseStr = reverse(cstr);
	cout << "copy() result is: " << endl << copyStr << endl;
	cout << "reverse() result is" << endl << reverseStr << endl;
	}
	return 0;
}
