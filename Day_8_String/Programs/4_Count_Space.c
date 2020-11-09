#include<stdio.h>  
#include <string.h>    
int main(){    
  char address[50]; 
  int totalSpace=0,index=0;   
  printf("Enter string: ");    
  gets(address);//reads string from console    
  while(address[index]!='\0')
  {
  	if(address[index]== ' ')
  	{
  		totalSpace++;
	}
	index++;
   } 
   printf("total space in address is %d",totalSpace);
 return 0;    
}    
