#include<stdio.h>
int main()
{
	int i,r,n,sum=0,arr[50];
	printf("enter the number");
	scanf("%d",&n);
	for(r=0;r<n;r++)
	{
		scanf("%d",&arr[r]);
	}
	for(r=0;r<n;r++)
	{
		sum=sum+arr[r];
	}
	int avg=sum/n;
	printf("sum of array elements = %d\nAverage of array elements = %d",sum,avg);
}
