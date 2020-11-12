#include<stdio.h>
enum week{mon,tue=3,wed,thurd=7,fri,sat,sun};
int main()
{
enum week day;
day=wed;
printf("constant value  for wed is %d\n",day);
return 0; 

}
