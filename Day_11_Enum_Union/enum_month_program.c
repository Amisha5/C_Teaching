#include<stdio.h>
enum month{jan=1,feb,mar,apr,may,june,july,aug,sep,oct,nov,dec};
int main()
{
enum month m;
int i;
for(i=jan;i<=dec;i++)
printf("%d\n",i);
return 0; 
}

