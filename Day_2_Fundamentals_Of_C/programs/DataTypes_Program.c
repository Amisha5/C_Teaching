#include<stdio.h>
int main()
{
	int num;
	char ch;
	float fl;
	double dnum;
	
	printf("enter integer\n");
	scanf("%d",&num);
	
	printf("enter float\n");
	scanf("%f",&fl);
	printf("enter double\n");
	scanf("%lf",&dnum);
	printf("enter character value\n");
	scanf("%c",&ch);
	
	printf("Integer value = %d\n",num);
	printf("Character value =%c\n",ch);
	printf("FLoat value =%f\n",fl);
	printf("double value =%lf\n",dnum);
	
}
