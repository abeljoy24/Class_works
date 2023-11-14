#include<stdio.h>
void swap1(int , int);
main()
{
	int a=7, b=9;
	printf("Value of a=%d b=%d (before swapping)",a,b);
	swap1(&a,&b);
	printf("Value of a=%d b=%d (after swapping)",a,b);
}
void  swap1(int *x, int *y)
{
	int temp;
	int *ptemp=&temp
	*ptemp=*x;
	*y=*x;
	*y=*ptemp;
	printf("Value of a=%d b=%d",x,y);
}
