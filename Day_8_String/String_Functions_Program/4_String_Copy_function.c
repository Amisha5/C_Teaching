#include<stdio.h>  
#include <string.h>    
int main(){    
 	char name[20],name1[20]; 
	printf("enter name : ");
	gets(name);   
   	strcpy(name1,name);    
   	printf("Value of second string is: %s",name1);    
 return 0;    
}    
