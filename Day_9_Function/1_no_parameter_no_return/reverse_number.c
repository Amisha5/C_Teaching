#include<stdio.h>
int main()
{
	int reverseNumber();
	reverseNumber();	
}
int reverseNumber()
{
	int rem,rev=0,n,num,result;
	printf("enter number :");
	scanf("%d",&num);
	n=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		
	}
	printf("%d is reverse of given number\n",rev);
	if(n==rev)
	{
		printf("%d is pallindrom number",rev);
	}
	else
	{
		printf("%d is not pallindrom number",rev);
	}
	
}
