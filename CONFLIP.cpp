//Coin Flip
#include <iostream>
using namespace std;
int main()
{
	int i, T, G, I, N, Q;
	int A[100000];
	cin >> T;
	while (T--)//number of test case
	{
		cin >> G;//number of games
		while (G--)
		{
			cin >> I >> N >> Q;//I denotes initial state of coin, N denotes the number of coins, Q denotes whether heads or tails are to be counted
			int S;
			if (N % 2 == 0)
			{
				S = N/2;
			}
			else if (N % 2 != 0 && I == Q)
			{
				S = N/2;
			}
			else if (N % 2 != 0 && I != Q)
			{
				S = N/2 + 1;
			}
			printf ("%d\n", S);
		}
	}
	return 0;
}
