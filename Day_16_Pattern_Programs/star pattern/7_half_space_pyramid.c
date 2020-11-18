#include<stdio.h>
int main()
{
	int r,c,s,n;
	printf("enter the number");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=n;c++)
		{
			if(r==c || r==n || c==1)
			{
			printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
