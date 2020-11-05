#include<stdio.h>
void main()
{
 int gender;
 printf("Enter your choice for gender: ");
 scanf("%c",&gender);
 switch(gender)
 {
 case 'm': printf("Male\n");break;
 case 'f': printf("Female\n");break;
 default: printf("wrong choice");
 }
}
