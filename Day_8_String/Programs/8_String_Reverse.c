#include<stdio.h>  
#include <string.h>    
int main(){    
  char str[20],index;    
  printf("Enter string: ");    
  gets(str);   
  for(index=strlen(str);index>=0;index--)
  {
  	printf("%c",str[index]);
  }
 return 0;    
}    
