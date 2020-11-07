#include <stdio.h>
int main()
{
int num = 5,index;
printf("Hello loop\n");
for(index=1;index<=5;index++)
{
	printf("welcome\n");
	if(index==3)
	{
		printf("Hello Exit\n");
		exit(0); //break the loop
	}
	printf("Good\n");
}
printf("Bye Bye\n");
return 0;
}
