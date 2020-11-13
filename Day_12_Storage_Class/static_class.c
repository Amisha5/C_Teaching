#include <stdio.h>
void staticClass();
int main()
{
    staticClass();
    staticClass();
}
void staticClass()
{
    static int num = 1; // static is storage class
    num += 5;
    printf("%d\n",num);
}
