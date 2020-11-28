#include<stdio.h>
int main()
{
	int r,c,n;
	printf("enter the number");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=r;c<=n;c++)
		{
			printf("%c",'A'+ c-1);
		}
		printf("\n");
	}
}
