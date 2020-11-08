#include<stdio.h>
int main()
{
	int arr[50],r,n;
	printf("enter the number");
	scanf("%d",&n);
	int end=n-1;
	for(r=0;r<n;r++)
	{
		scanf("%d",&arr[r]);
	}
	printf("array elements are:\n");
	for(r=0;r<n;r++)
	{
	printf("%d ",arr[r]);
	}
	for(r=0;r<n/2;r++)
	{
		int a=arr[r];
		arr[r]=arr[end];
		arr[end]=a;
		end--;
	}
	printf("\nreverse elements are:\n");
	for(r=0;r<n;r++)
	{
	printf("%d ",arr[r]);
	}
}
