#include<stdio.h>
int main()
{
	int num;
	printf("Enter number\n");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("%d is even Number",num);
	}
	else
	{
		printf("%d is odd Number",num);
	}
	
}
