#include<stdio.h>
#include<string.h>
struct College
{
	int cStudentId;
	char cname[100],cAddress[50];
}clg;
void main()
{
	
	clg.cStudentId = 100;
	strcpy(clg.cname,"Bansal college rau");
	strcpy(clg.cAddress,"Indore");
	printf("college student Id is %d\ncollege name is %s\ncollege Address is %s",clg.cStudentId,clg.cname,clg.cAddress);
}
