#include<stdio.h>
int main()
{
	int number,value;
	printf("Enter number");
	scanf("%d",&number);
	printf("Even numbers upto given value\n");
	for(value=1;value<=number;value++)
	{
		if(value%2==0)
		{
			printf("%d ",value);
		}
	}
}
