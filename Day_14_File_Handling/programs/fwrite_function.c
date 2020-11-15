#include <stdio.h>  
struct student
{
	int id;
	char sname[40],sbranch[40];
}s;
void main()
{  
   FILE *fp; 
	printf("enter student ID\n");
	scanf("%d",&s.id);
	fflush(stdin);
	printf("enter student Name\n");
	gets(s.sname);
	fflush(stdin);
	printf("enter student Branch\n");
	gets(s.sbranch);
	fp= fopen("emp1.txt","w");
	
	fwrite(&s,sizeof(s),1,fp);
	printf("successfully ");
   		fclose(fp);
   //closing file  
}  
