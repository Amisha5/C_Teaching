#include<stdio.h>
int main()
{
	int arr[20],r,n;
	printf("enter the number");
	scanf("%d",&n);
	for(r=0;r<n;r++)
	{
		scanf("%d",&arr[r]);
	}
	int max=arr[0];
	for(r=0;r<n;r++)
	{
		if(max<arr[r])
		{
			max=arr[r];
		}
	}
	printf("greatest number is : %d ",max);
}
