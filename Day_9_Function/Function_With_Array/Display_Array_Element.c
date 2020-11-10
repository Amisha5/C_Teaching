#include<stdio.h>
int main()
{
	int Display(int[],int);
	int arr[20],num,index;
	printf("enter number : ");
	scanf("%d ",&num);
	for(index=0;index<num;index++)
	{
		scanf("%d",&arr[index]);
	}
	Display(arr,num);
}
int Display(int arr[],int num)
{
	int index;
	for(index=0;index<num;index++)
	{
		printf("%d ",arr[index]);
	}
}
