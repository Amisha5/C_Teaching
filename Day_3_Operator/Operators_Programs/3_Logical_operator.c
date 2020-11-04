#include<stdio.h>
int main()
{
	int num1,num2,result=0;
	printf("Enter number to perfrom relational operator\n");
	scanf("%d %d",&num1,&num2);
	
	result= (num1<num2) && (num1<=num2);
	printf("\n(%d<%d) && (%d<=%d) = %d\n",num1,num2,num1,num2,result);
	
	result= (num1>num2) || (num1<=num2);
	printf("\n(%d>%d) || (%d>=%d) = %d\n",num1,num2,num1,num2,result);
	
	result= !((num1<=num2) || (num1<=num2));
	printf("\n!((%d<=%d) || (%d<=%d)) = %d\n",num1,num2,num1,num2,result);
	
	
}
