#include<stdio.h>
int main()
{
	int reverseNumber(int);
	int num,result;
	printf("enter number :");
	scanf("%d",&num);
	result=reverseNumber(num);
	printf("%d is reverse of given number",result);
}
int reverseNumber(int num)
{
	int rem,rev=0;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		
	}
	return rev;
	
}
