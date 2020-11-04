#include<stdio.h>
int main()
{
	int num;
	char ch;
	float fnum;
	double dnum;
	
	//Sizeof using dataType
	printf("\nsize of Integer type is = %d\n",sizeof(int));
	printf("size of Character type is = %d\n",sizeof(char));
	printf("size of Float type is = %d\n",sizeof(float));
	printf("size of Double type is = %d\n",sizeof(double));
	
	//SiZeOf using variable name
	printf("\nsize of num variable is = %d\n",sizeof(num));
	printf("size of ch variable is = %d\n",sizeof(ch));
	printf("size of fnum type is = %d\n",sizeof(fnum));
	printf("size of dnum type is = %d\n",sizeof(dnum));
}
