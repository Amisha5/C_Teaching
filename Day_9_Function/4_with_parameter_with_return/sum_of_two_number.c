#include<stdio.h>
int main()
{
	int Sum(int,int);
	int num1,num2,sum;
	printf("enter num1 and num2 :");
	scanf("%d %d",&num1,&num2);
	printf("sum is %d",Sum(num1,num2));
}
int Sum(int num1,int num2)
{
	int sum;
	sum=num1+num2;
	return sum;
}
