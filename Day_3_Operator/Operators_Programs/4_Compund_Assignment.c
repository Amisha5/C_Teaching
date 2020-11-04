#include<stdio.h>
int main()
{
	int num,result=2;
	printf("Enter number to perform Arithmetic operation\n");
	scanf("%d",&num);
	result+=num;
	printf("\nsum of two number is %d\n",result);
	
	result-=num;
	printf("\nsubtraction of two number is %d\n",result);
	
	result*=num;
	printf("\nMultiplication of two number is %d\n",result);
	
	result/=num;
	printf("\nDivision of two number is %d\n",result);
	
	result%=num;
	printf("\nModules of two number is %d\n",result);
	
}
