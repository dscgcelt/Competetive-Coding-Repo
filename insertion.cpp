
#include<iostream>
using namespace std;
int bin_srch(int arr[],int low,int high,int n)
{
	if(high<=low){
		return (n>arr[low]?(low+1):(low));
	}
	int mid=(high+low)/2;
	if(n==arr[mid]){
		return mid+1;
	}
	else if(n>arr[mid])
	{
		return bin_srch(arr,mid+1,high,n);
	}
	else if(n<arr[mid])
	{
		return bin_srch(arr,low,mid-1,n);
	}
	
	
}
int insertion(int arr[], int n) {
	int i, j, k,place,current;
	
	
	
	for (i=1; i<n; ++i) {
		current= arr[i];
		j=i-1;
		
		//finding the place where the selected element will be placed within the sorted array on the left side
		place=bin_srch(arr,0,j,current);
		
		//shifting the elements one place right to make room for the selected element  
		while (j >=place) {
			arr[j+1] = arr[j];
			j--;
		}
		//assigning the place for the selected element
		arr[j+1] = current;
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
