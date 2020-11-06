#include<stdio.h>
int main()
{
	int i,n,rem,sum=0;
	printf("Enter number\n");
	scanf("%d",&n);
	int num=n;
	while(n>0)
	{
		rem=n%10;
		sum= (rem*rem*rem)+sum;
		n=n/10;
		
	}
	if(sum==num)
	{
		printf("%d is Armstrong number",num);
	}
	else
	{
			printf("%d is not Armstrong number",num);
	}
	
}
