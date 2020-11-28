#include<stdio.h>
int main()
{
	int r,c,n;
	printf("enter the number");
	scanf("%d",&n);
	for(r=5;r>=1;r--)
	{
		for(c=1;c<=r;c++)
		{
			printf("%c",'@'+r);
		}
		printf("\n");
	}
}
