#include<stdio.h>
void main()
{
	int *ptr,var;
	var=3;
	ptr=&var;
	*ptr=8;
	printf("address of var : %d\n",*ptr);
	printf("address of ptr : %d\n",var);
}
