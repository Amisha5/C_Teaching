#include <stdio.h>  
void main()
{  
   FILE *fp;  
   fp = fopen("file1.txt", "w");//opening file  
   fputc('s',fp);//writing single character into file  
   fclose(fp);//closing file  
}  
