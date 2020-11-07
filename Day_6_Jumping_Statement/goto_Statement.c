#include <stdio.h>
int main()
{
printf("Hello\n");
printf("Welcome\n");
p:
printf("Good\n");
printf("Better\n");
goto m;
printf("Best\n");
goto p;
m:
printf("Bye Bye\n");
return 0;
}
