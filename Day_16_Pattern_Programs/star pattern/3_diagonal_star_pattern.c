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
			if(r==1 || r==n || c==1 || c==n || r==c || c==(n+1)-r)
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
