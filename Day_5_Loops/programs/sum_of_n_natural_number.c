#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum of n number is %d",sum);
	
}
