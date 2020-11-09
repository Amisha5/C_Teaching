#include<stdio.h>  
#include <string.h>    
int main(){    
  char address[50]; 
  int totalNumber=0,index=0;   
  printf("Enter string: ");    
  gets(address);    
  while(address[index]!='\0')
  {
  	if(address[index]>='0' && address[index]<='9')
  	{
  		totalNumber++;
	}
	index++;
   } 
   printf("total numbers in address is %d",totalNumber);
 return 0;    
}    
