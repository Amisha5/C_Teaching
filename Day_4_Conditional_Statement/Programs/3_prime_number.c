#include<stdio.h>
int main()
{
	int i,n,c=0;
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("%d is prime",n);
	}
	else
	{
		printf("%d is not prime",n);
	}
}