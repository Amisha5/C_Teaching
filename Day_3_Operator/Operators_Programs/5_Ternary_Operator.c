#include<stdio.h>
int main()
{
	int age;
	printf("Enter number to perform Arithmetic operation\n");
	scanf("%d",&age);
	(age>=18)?printf("Eligible for Vote"):printf("Not Eligible for Vote");
}
