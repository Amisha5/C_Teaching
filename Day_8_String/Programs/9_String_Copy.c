#include<stdio.h>  
#include <string.h>    
int main(){    
  char str[20],str1[20],index;    
  printf("Enter string: ");    
  gets(str);   
  for(index=0;index<=strlen(str);index++)
  {
  	str1[index]=str[index];
  }
  printf("String 1 value is : ");
  for(index=0;index<=strlen(str);index++)
  {
  	 printf("%c",str[index]);
  }
  printf("\nString 2 value is : ");
  for(index=0;index<=strlen(str);index++)
  {
  	 printf("%c",str1[index]);
  }
 return 0;    
}    
