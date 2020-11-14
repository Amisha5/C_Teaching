#include<stdio.h>
void main()
{
	int var=30;
	int *ptr;
	ptr=&var;
	printf("address of var : %X\n",&var);
	printf("address of ptr : %X\n",ptr);
	printf("address of *ptr : %d\n",*ptr);
}
