/* 
01110
10001
10001
10001
01110 */
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
			if((r==1 || r==n) && (c==1 || c==n))
			{
			printf("0");
			}
			else
			if(r==1 || r==n|| c==1 || c==n)
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
