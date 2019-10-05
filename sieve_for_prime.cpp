//sieve method is used in many questions to generate prime numbers.
//its beauty is its low complexity i.e O(n*log(log(n)))


#include <bits/stdc++.h> 
using namespace std; 

void SieveOfEratosthenes(int n) 
{ 
	bool prime[n+1]; 
	memset(prime, true, sizeof(prime)); 

	for (int p=2; p*p<=n; p++) 
	{ 
		if (prime[p] == true) 
		{ 
			for (int i=p*p; i<=n; i += p) 
				prime[i] = false; 
		} 
	} 

	for (int p=2; p<=n; p++) 
	if (prime[p]) 
		cout << p << " "; 
} 

int main() 
{ 
	int n;
	cout<<"Enter the value upto which you want prime numbers";
	cin>>n;
	SieveOfEratosthenes(n); 
	return 0; 
} 
