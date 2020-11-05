#include<stdio.h>
int number=30;//global variable
void main()
{
	int num=10; //local variable
	printf("local variable value is %d\n",num);
	printf("global variable value is %d",number);
}
