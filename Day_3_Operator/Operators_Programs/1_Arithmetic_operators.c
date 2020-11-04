#include<stdio.h>
int main()
{
	int num1,num2,result=0;
	printf("Enter number to perform Arithmetic operation\n");
	scanf("%d %d",&num1,&num2);
	result= num1+num2;
	printf("\nsum of two number is %d\n",result);
	
	result= num1-num2;
	printf("\nsubtraction of two number is %d\n",result);
	
	result= num1*num2;
	printf("\nMultiplication of two number is %d\n",result);
	
	result= num1/num2;
	printf("\nDivision of two number is %d\n",result);
	
	result= num1%num2;
	printf("\nModules of two number is %d\n",result);
	
}
