
/////////
/*
1111
0000
1111
0000 
1111
*/
////////
#include<stdio.h>
int main()
{
	int r,c,num;
	printf("enter the number");
	scanf("%d",&num);
	for(r=1;r<=num;r++)
	{
		for(c=1;c<=num;c++)
		{
			if(r%2==0)
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
