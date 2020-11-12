#include<stdio.h>
union test 
{
	int num1,num2;
	char name[20];
}t;
int main()
{
	
	printf("Size of union is %d\n",sizeof(t));
	return 0;
}
