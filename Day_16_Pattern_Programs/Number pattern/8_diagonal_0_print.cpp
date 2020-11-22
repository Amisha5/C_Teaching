/* 
10101
01010
10101
01010
10101 
*/
#include<stdio.h>
int main()
{
	int r,c,n,k;
	printf("enter the number");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=n;c++)
		{
			if(c%2 && r%2 || r==c ||c==(n+1)-r)
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
