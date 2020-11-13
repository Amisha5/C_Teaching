#include <stdio.h>
void globalExtern();
extern int number = 10;  // global variable i.e; extern class
int main()
{
    ++number;     
    globalExtern();
    return 0;
}
void globalExtern()
{
    ++number;   
    printf("number = %d", number);
}
