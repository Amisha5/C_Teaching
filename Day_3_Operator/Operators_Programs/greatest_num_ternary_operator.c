#include<stdio.h>
int main()
{
	int max,n1,n2,n3;
	printf("enter the number");
	scanf("%d %d %d",&n1,&n2,&n3);
	max=(n1 >n2 && n1>n3 )? n1 :(n2>n3)? n2 : n3;
	printf(" max number between %d %d and %d  is %d",n1,n2,n3,max);
}

