#include<stdio.h>
int main()
{
int x[]={3,6,10,20,30};
int *ptr,i;
ptr = x;
printf("Element and there address list");
for(i=0;i<5;i++)
{
printf("Value = %d Address = %d\n",x[i],ptr);
ptr++;
}
}
