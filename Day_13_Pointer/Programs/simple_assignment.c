#include<stdio.h>
void main()
{
	int *ptr,var;
	var=21;
	printf("address of &var : %d\n",&var);
	printf("address of var : %d\n",var);
	
	ptr=&var;
	printf("address of ptr : %d\n",ptr);
	printf("address of *ptr : %d\n",*ptr);
	
	var=22;
	printf("address of ptr : %d\n",ptr);
	printf("address of *ptr : %d\n",*ptr);
	
	*ptr=2;
	printf("address of &var : %d\n",&var);
	printf("address of var : %d\n",var);
}
