#include<stdio.h>
int main()
{
	int n,num;
	printf("enter the number");
	scanf("%d",&n);
	num= (n%2==0)? printf("number is even"): printf("number is odd");
}
