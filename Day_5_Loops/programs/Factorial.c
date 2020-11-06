#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("Enter number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of given number is %d",fact);
	
}
