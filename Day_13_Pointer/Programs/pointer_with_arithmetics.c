#include<stdio.h>
void main()
{
	int var=21,*ptr;
	ptr=&var;
	printf("address of ptr : %d\n",ptr);
	printf("address of ++ptr : %d\n",++ptr);
	printf("address of ptr++ : %d\n",ptr++);
	printf("address of --ptr : %d\n",--ptr);
	printf("address of ptr-- : %d\n",ptr--);
	printf("address of ptr : %d\n",ptr);
}
