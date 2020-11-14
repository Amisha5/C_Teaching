#include<stdio.h>
void main()
{
	int var=21,*ptr,**pptr;
	ptr=&var;
	pptr=&ptr;
	printf("address of ptr : %d\n",ptr);
	printf("address of pptr : %d\n",pptr);
	
	ptr=&var;
	printf("address of *ptr : %d\n",*ptr);
	printf("address of pptr : %d\n",**pptr);
}
