#include<stdio.h>
void main()
{
	void oddEven(int);
	int num,sum;
	printf("enter num1 and num2 :");
	scanf("%d",&num);
	oddEven(num);
}
void oddEven(int num)
{
	if(num%2==0)
	{
		printf("%d is even number",num);
	}
	else
	{
		printf("%d is odd number",num);
	}
	
}
