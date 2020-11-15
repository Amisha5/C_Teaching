#include <stdio.h>  
struct student
{
	int id;
	char sname[40],sbranch[40];
}s;
void main()
{  
   FILE *fp; 
   fp= fopen("emp1.txt","r");
   	fread(&s,sizeof(s),1,fp);
		printf("Record :\n");
		printf("id = %d\n",s.id);
		printf("sname = %s\n",s.sname);
		printf("sbranch = %s\n",s.sbranch);
   		fclose(fp);
   //closing file  
}  
