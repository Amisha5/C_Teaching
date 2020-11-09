#include<stdio.h>
#include<string.h>
void main()
{
	char name[20];
	printf("enter name : ");
	gets(name);
	printf("%s ",strupr(name));
}
