//Making a Meal
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int N, i, j, c=0, o=0, d=0, e=0, h=0, f=0;
		cin >> N;//number of strings
		string S[100];
		//int A[26]={0};//array to store the count of the characters
		for (i=0; i<N; i++)
		{
			cin >> S[i];
		}
		for (i=0; i<N; i++)
		{
			for (j=0; j<S[i].length(); j++)
			{
				if (S[i][j]=='c')
					c++;
				else if (S[i][j]=='o')
					o++;
				else if (S[i][j]=='d')
					d++;
				else if (S[i][j]=='e')
					e++;
				else if (S[i][j]=='h')
					h++;
				else if (S[i][j]=='f')
					f++;
			}
		}
		int ans = min(c/2,min(o,min(d,min(e/2,min(h,f)))));
		cout << ans << endl;
	}
	return 0;
}
