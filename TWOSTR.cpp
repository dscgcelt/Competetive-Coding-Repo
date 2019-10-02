//Chef and Wildcard Matching
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int T, i;
	string str1;
	string str2;
	cin >> T;
	while (T--)
	{
		int flag=0;
		cin >> str1;
		cin >> str2;
		for (i=0; i<str1.length(); i++)
		{
			if ((str1[i]!=str2[i]) && (str1[i]!='?' && str2[i]!='?'))
			{
				cout << "No" << endl;
				flag=1;
				break;
			}
		}
		if (flag==0)
		{
			cout << "Yes" << endl;
		}
	}
	return 0;
}
