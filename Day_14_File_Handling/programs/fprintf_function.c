#include <stdio.h>  
void main()
{  
   FILE *fp;  
   fp = fopen("file.txt", "w");//opening file  
   fprintf(fp, "Hello file by fprintf...\n");//writing data into file  
   fclose(fp);//closing file  
}  
