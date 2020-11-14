#include<stdio.h>
int main()
{
	int Swap(int*,int*);
	int num1,num2;
	printf("Enter number1 ");
	scanf("%d",&num1);
	printf("Enter number2 ");
	scanf("%d",&num2);
	printf("befor swapping value in num1 %d %d\n",num1,num2);
	Swap(&num1,&num2);
	printf("after swapping value in num1 %d %d",num1,num2);
	
}
int Swap(int *num1,int *num2)
{
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
}
