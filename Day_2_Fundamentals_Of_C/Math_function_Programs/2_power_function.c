#include<stdio.h>
#include<math.h>
void main()
{
	int base,power;
	printf("enter base value : ");
	scanf("%d",&base);
	printf("\nenter power value : ");
	scanf("%d",&power);
	printf("power value is %.2f ",pow(base,power));
}
