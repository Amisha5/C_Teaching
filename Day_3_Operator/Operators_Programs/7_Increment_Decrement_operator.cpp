#include<stdio.h>
int main()
{
	int num,result=0;
	printf("Enter number to perfrom relational operator\n");
	scanf("%d",&num);
	result= num++;
	printf("\nPost increment(num++) value is = %d\n",result);
	
	result= ++num;
	printf("\nPre increment(++num) value is = %d\n",result);
	
	result= num--;
	printf("\nPost decrement(num--) value is = %d\n",result);
	
	result= --num;
	printf("\nPre decrement(--num) value is = %d\n",result);
}
