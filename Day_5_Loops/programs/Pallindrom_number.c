#include<stdio.h>
int main()
{
	int i,n,rem,rev=0;
	printf("Enter number\n");
	scanf("%d",&n);
	int num=n;
	while(n>0)
	{
		rem=n%10;
		rev= rev*10+rem;
		n=n/10;
		
	}
	if(rev==num)
	{
		printf("%d is pallindrom number",num);
	}
	else
	{
			printf("%d is not pallindrom number",num);
	}
	
}
