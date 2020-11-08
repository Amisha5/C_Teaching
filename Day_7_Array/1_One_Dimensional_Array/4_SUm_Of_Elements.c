#include<stdio.h>
int main()
{
	int i,row,num,sum=0,arr[50];
	printf("enter the number");
	scanf("%d",&num);
	for(row=0;row<num;row++)
	{
		scanf("%d",&arr[row]);
	}
	for(row=0;row<num;row++)
	{
		sum=sum+arr[row];
	}
	
	printf("sum and average of array is %d",sum);
}
