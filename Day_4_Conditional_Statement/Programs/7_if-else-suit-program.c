#include<stdio.h>
int main()
{
	int num;
	printf("Enter number for card\n");
	scanf("%d",&num);
	if(num==1)
	{
		printf("Hearts");
	}
	else
	if(num==2)
	{
		printf("Spades");
	}
	else
	if(num==3)
	{
		printf("Diamonds");
	}
	else
	if(num==4)
	{
		printf("Clubs");
	}
	else
	{
		printf("wrong choice");
	}
}
