#include <stdio.h>  
void main()
{  
   FILE *fp; 
   char ch[200];
    
   fp = fopen("file1.txt", "w");//opening file 
   if(fp==NULL)
   {
   	printf("file is empty");
	} 
	else
	{
		printf("enter String\n");
		scanf("%s",&ch);
		fputs(ch,fp);//writing single character into file  
		printf("successfully added");
   		fclose(fp);
	}
   //closing file  
}  
