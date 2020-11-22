/* *
10001
01010
00100
01010
10001 */
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
			if(r==c || c==(n+1)-r)
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
