#include<stdio.h>
void main()
{
	int *ptr,var1,var2;
	var1=3;
	var2=-15;
	ptr=&var1;
	printf("address of var : %d\n",*ptr);
	ptr=&var2;
	printf("address of ptr : %d\n",*ptr);
}
