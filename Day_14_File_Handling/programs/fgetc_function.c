#include<stdio.h>  
void main()
{  
FILE *fp;  
char c;  
fp=fopen("file1.txt","r");  
  
while((c=fgetc(fp))!=EOF)
{  
printf("%c",c);  
}  
fclose(fp);  
getch();  
}  
