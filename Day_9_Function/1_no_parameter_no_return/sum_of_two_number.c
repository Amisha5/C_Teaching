#include<stdio.h>
void main()
{
	void Sum();
	Sum();
}
void Sum()
{
	int num1,num2,sum;
	printf("enter num1 and num2 :");
	scanf("%d %d",&num1,&num2);
	sum=num1+num2;
	printf("Sum is %d",sum);
}
