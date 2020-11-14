#include<stdio.h>
void main()
{
	int *ptr,var;
	var=3;
	ptr=&var;
	var=5;
	printf("address of var : %d\n",var);
	printf("address of ptr : %d\n",*ptr);
}
