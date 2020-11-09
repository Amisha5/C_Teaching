#include<stdio.h>  
#include <string.h>    
int main()
{    
  char address[50]; 
  int totalAlpha=0,index=0;   
  printf("Enter string: ");    
  gets(address);  
  while(address[index]!='\0')
  {
  	if(address[index]>='a' && address[index]<='z' || address[index]>='A' && address[index]<='Z')
  	{
  		totalAlpha++;
	}
	index++;
   } 
   printf("total numbers in address is %d",totalAlpha);
 return 0;    
}    
