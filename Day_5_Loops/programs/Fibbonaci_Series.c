#include<stdio.h>
int main()
{
	int i,n,num1=0,num2=1,sum=0;
	printf("Enter number\n");
	scanf("%d",&n);
	printf("Fibonnaci Series is : ");
	printf("%d %d ",num1,num2);
	for(i=1;i<n-1;i++)
	{
		sum=num1+num2;
		num1=num2;
		num2=sum;
		printf("%d ",sum);
	}
}
