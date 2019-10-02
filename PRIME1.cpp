//Prime Generator
#include <iostream>
#include <math.h>
using namespace std;
int isPrime(int num)
{
	if (num==1)
		return 0;
	int i;
	for (i=2; i<=sqrt(num); i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1; // if the control reaches here, the number is prime
}
int main()
{
	int T, i, m, n;
	cin >> T;
	while (T--)
	{
		cin >> m >> n;
		for (i=m; i<=n; i++)
		{
			if (isPrime(i))
				cout << i << endl;
		}
	}
	return 0;
}
