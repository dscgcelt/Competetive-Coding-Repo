#include<stdio.h>
int minMaxSum(int*a);
 
int main()
{
	int a[5];
	int i;
	for(i=0;i<5;i++)
		scanf("%d",a+i);
	minMaxSum(a);
	return 0;	
}
int minMaxSum(int*a)
{
	int i;
	long long int sum=0;//to ensure sum is can hold more than 32 bits
	for(i=0;i<5;i++)
		sum+=a[i];
	//finding the max and min
	int max=a[0],min=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("%lld  %lld\n",sum-max,sum-min);
	return 0;
}
