

#include<iostream>
using namespace std;
int insertion(int arr[], int n) {
	int i, j, k;
	for (i=0; i<n; i++) {
		k = arr[i];
		j=i-1;
		while (j >= 0 && arr[j] > k) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = k;
	}
}

int main() {
	int arr[100], n;
	cout<<"Enter the size of array: \n";
	cin>>n;
	cout<<"Enter the array: \n";
	for (int i=0; i<n; i++) 
	cin>>arr[i];
	insertion(arr, n);
	cout<<"After sorting: \n";
	for (int i=0; i<n; i++) 
	cout<<arr[i]<<"\t";
}
