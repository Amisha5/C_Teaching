#include<stdio.h>
int main()
{
	int number,value;
	printf("Enter number");
	scanf("%d",&number);
	for(value=1;value<=number;value++)
	{
		printf("%d ",value);
	}
}
