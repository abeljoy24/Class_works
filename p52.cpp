#include<stdio.h>
int sum1(int x, int y);
main()
{
	int a,b,c;
	a=10;
	b=20;
	
	c=sum1(a,b);
	
	printf("\n o/p outside the function in main= %d",c);
}
int sum1(int x, int y)
{
	int z;
	z=x+y;
	printf("output inside the function z= %d",z);
	
	return z;
}
