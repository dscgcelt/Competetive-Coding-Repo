//Dividing Stamps
#include <iostream>
using namespace std;
int main()
{
	int N, i;
	int C[100000];
	int sum1 = 0;
	cin >> N;

	for (i=0; i<N; i++)
	{
		cin >> C[i];
		sum1 += C[i];
	}
	int sum2 = N*(N+1)/2;
	if (sum1 == sum2)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
