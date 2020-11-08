#include<stdio.h>
int main()
{
	int arr[50],r,n,j;
	printf("enter the number");
	scanf("%d",&n);
	for(r=0;r<n;r++)
	{
		scanf("%d",&arr[r]);
	}
	for(r=0;r<n;r++)
	{
		for(j=r+1;j<n;j++)
		{
			if(arr[r]>arr[j])
			{
				int a=arr[r];
				arr[r]=arr[j];
				arr[j]=a;
			}
		}
	}printf("sorting elements in ascending order");
	for(r=0;r<n;r++)
	{
	printf("%d\n",arr[r]);
	}
}
