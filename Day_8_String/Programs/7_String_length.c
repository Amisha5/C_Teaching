#include<stdio.h>  
#include <string.h>    
int main(){    
  char address[20];
  int length=0,index=0;    
  printf("Enter string: ");    
  gets(address);  
  puts(address);
  while(address[index]!='\0')
  {
  	length++;
  	index++;
  }
  printf("String length is: %d",length);    
     
 return 0;    
}    
