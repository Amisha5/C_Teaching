#include<stdio.h>
void main()
{
 int choice;
 printf("Enter your choice for card : ");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1: printf("Hearts\n");break;
 case 2: printf("Clubs\n");break;
 case 3: printf("Diamonds\n");break;
 case 4: printf("Spades\n");break;
 default: printf("wrong choice");
 }
}
