#include<stdio.h>
int main()
{
	void Sum(int,int);
	int num1,num2;
	printf("enter num1 and num2 :");
	scanf("%d %d",&num1,&num2);
	Sum(num1,num2);
}
void Sum(int num1,int num2)
{
	int sum;
	sum=num1+num2;
	printf("sum is %d",sum);
}
