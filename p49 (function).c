//no parameter & no return
#include<stdio.h>
//declare
void print1();
main()
{
int i;
for (i=1; i<7; i++)
	print1();   //function calling
}
void print1()
{
	printf("\n * ");
}
