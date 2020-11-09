#include<stdio.h>  
#include <string.h>    
int main()
{    
  char address1[20],address2[20];    
  printf("Enter 1st string: ");    
  gets(address1);//reads address1 string from console  
    
  printf("Enter 2nd string: ");    
  gets(address2); //reads address2 string from console 
  
  if(strcmp(address1,address2)==0)    //if both are equivalent output will be 0
	  {
	  	printf("Strings are equal");
	  }    
  else    
      {
      	printf("Strings are not equal"); 
	  }   
 return 0;    
}    
