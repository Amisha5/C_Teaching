#include<stdio.h>
void main()
{
	void Table(int);
	int num;
	printf("enter number :");
	scanf("%d",&num);
	Table(num);
}
void Table(int num)
{
	int result,value;
	for(value=1;value<=10;value++)
	{
		result=num*value;
		printf("%d * %d = %d\n",num,value,result);
	}
}
