#include<stdio.h>  
#include <string.h>    
int main(){    
 	char name[20],surname[20]; 
	printf("enter name : ");
	gets(name);   
	printf("enter surname : ");
	gets(surname);
   	strcat(name,surname);    
   	printf("Value of second string is: %s",name);    
 return 0;    
}    
