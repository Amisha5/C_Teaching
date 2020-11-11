#include<stdio.h>
#include<string.h>
	struct A
	{ 
		int x,y;
	};
	struct B
	{
		int c;
		struct A d;
	};
	void main()
	{
		struct A v1;
		struct B v2;
		v1.x=100;
		v1.y=200;
		v2.c=300;
		v2.d.x=400;
		v2.d.y=500;
		printf("value of x from structure A : %d\n",v1.x);
		printf("value of x from structure B : %d\n",v2.d.x);
		
		
	}
