/* 
11111
10001
10001
10001
11111 */
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
			if(r==(n/2)+1 && c==(n/2)+1 && r==c)
			{
			printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}
