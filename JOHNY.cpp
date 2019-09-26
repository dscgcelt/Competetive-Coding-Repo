//Uncle Johny
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i, T, N, K, A[100];
	cin >> T;
	while (T--)
	{
		cin >> N; //number of songs
		for (i=0; i<N; i++)//array containing the length of various songs
		{
			cin >> A[i];
		}
		cin >> K;//position of 'Uncle Johny' in initial playlist
		int old_pos = K-1;
		int length_of_song = A[old_pos];
		int new_pos = -1;
		//sort the playlist acc to length of songs
		sort (A, A+N);
		//find new position of 'Uncle Johny'
		for (i=0; i<N; i++)
		{
			if (A[i]==length_of_song)
			{
				new_pos = i;
				break;
			}	
		}
		cout << new_pos+1 << endl;
	}
	return 0;
}
