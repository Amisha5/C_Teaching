#include<stdio.h>
void main()
{
	void Table();
	Table();
}
void Table()
{
	int result,value;
	int num;
	printf("enter number :");
	scanf("%d",&num);
	for(value=1;value<=10;value++)
	{
		result=num*value;
		printf("%d * %d = %d\n",num,value,result);
	}
}
