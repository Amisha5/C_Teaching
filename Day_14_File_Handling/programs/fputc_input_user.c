#include <stdio.h>  
void main()
{  
   FILE *fp; 
   char ch;
    
   fp = fopen("file1.txt", "w");//opening file 
   if(fp==NULL)
   {
   	printf("file is empty");
	} 
	else
	{
		printf("enter character\n");
		scanf("%c",&ch);
		fputc(ch,fp);//writing single character into file  
		printf("successfully added");
   		fclose(fp);
	}
   //closing file  
}  
