/* Implement an algorithm to determine if a string has all unique characters. What if you can not use additional data structures?
 *
 * sort the chars in the string, compare only the with neighbour
 */
#include <iostream>
#include <algorithm>
using namespace std;

bool isUnique(string str)
{
	sort(str.begin(), str.end());
	bool isUniqueFlag = true;

	cout <<"after sort: str: " << str << endl;
	
	for (string::iterator i = str.begin(); i != str.end() - 1; i++)
	{
		if (*i == *i++)
		{
			isUniqueFlag = false;
			break;
		}
		else{
			
		}
	}

	return isUniqueFlag;	
}

int main(void)
{
	string str = "";
	while(true)
	{
			
		
	cout << "input the string to test if it contains all unique chars " << endl;
	getline(cin, str);

	cout << "is unique: " << isUnique(str) << endl;
	}
}
