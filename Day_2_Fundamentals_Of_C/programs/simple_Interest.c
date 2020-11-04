#include<stdio.h>    
void main()
{    
float rate,principle,time,simpleInterest;    
printf("enter a number : ");    
scanf("%f %f %f",&rate,&principle,&time); 
simpleInterest=(rate*principle*time)/100;
printf("simple interset is:%.2f ",simpleInterest);    
  
}    
