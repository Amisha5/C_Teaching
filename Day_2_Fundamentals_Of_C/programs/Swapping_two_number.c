#include<stdio.h>
int main()
{
	int i,n,num1=0,num2=1,sum=0;
	printf("Enter number\n");
	scanf("%d\n%d",&num1, &num2);
	printf("\nvalue Befor swapping : %d %d ",num1,num2);
	int temp=num1;
	num1=num2;
	num2=temp;
	printf("\nvalue After swapping : %d %d ",num1,num2);
	
}
