#include<stdio.h>  
#include <string.h>    
int main(){    
  char name[20];    
  printf("Enter string: ");    
  gets(name);  
  printf("String is: %s",name);    
  printf("\nReverse String is: %s",strrev(name));    
 return 0;    
}    
