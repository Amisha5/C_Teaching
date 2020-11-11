#include<stdio.h>
#include<string.h>
struct Employee
{
	int eId;
	char eName[100];
}emp1;
void main()
{
	struct Employee emp2;
	printf("employee 1 details are :\n");
	printf("enter employee1 Id : ");
	scanf("%d",&emp1.eId);
	fflush(stdin);
	printf("enter employee1 name : ");
	gets(emp1.eName);

	printf("employee 2 details are :\n");
	printf("enter eployee2 Id : ");
	scanf("%d",&emp2.eId);
	fflush(stdin);
	printf("enter employee2 name : ");
	gets(emp2.eName);
	printf("Employee1 Id is : %d\nEmployee1 name is : %s\n",emp1.eId,emp1.eName);
	printf("Employee2 Id is : %d\nEmployee2 name is : %s",emp2.eId,emp2.eName);
}
