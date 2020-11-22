/*
01010
01010
01010
01010
01010 */
#include<stdio.h>
int main()
{
	int r,c,n;
	printf("enter the number");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=n;c++)
		{
			if(c%2==0)
			{
			printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}
