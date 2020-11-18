#include<stdio.h>
int main()
{
	int r,c,s,n;
	printf("enter the number");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(s=1;s<r;s++)
		{
			printf(" ");
		}
		for(c=r;c<=n;c++)
		{
			printf("*");
		}
		printf("\n");
	}
}
