#include<stdio.h>
void main()
{
	int arr[20],num,i;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("enter elements of array \n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array Elements are:\n");
	for(i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
