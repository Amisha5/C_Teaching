#include<stdio.h>
int main()
{
	int i,n,rem,sum=0;
	printf("Enter number\n");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum= sum+rem;
		n=n/10;
		
	}
	printf("sum of digits is %d",sum);
	
}
