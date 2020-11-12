#include<stdio.h>
union test 
{
	int num1,num2;
};
int main()
{
	union test t;
	t.num1=2;
	printf("after making num1=2:\n num1=%d, num2=%d\n",t.num1,t.num2);
	t.num2=10;
	printf("after making num2=10:\n num1=%d, num2=%d\n",t.num1,t.num2);
	return 0;
}
