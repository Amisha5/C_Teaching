#include<stdio.h>
int main()
{
	int i,n,rem,rev=0;
	printf("Enter number\n");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		rev= rev*10+rem;
		n=n/10;
		
	}
	printf("reverse of given number is %d",rev);
	
}
