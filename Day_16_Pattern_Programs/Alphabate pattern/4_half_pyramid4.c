#include<stdio.h>
int main()
{
	int r,c,n;
	printf("enter the number");
	scanf("%d",&n);
	for(r=1;r<=5;r++)
	{
		for(c=r;c>=1;c--)
		{
			printf("%c",'A'+ c-1);
		}
		printf("\n");
	}
} 
