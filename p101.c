#include<stdio.h>
/*
struct result
{
	int marks;	
};
struct student
{
	int reg;
	struct result r1;
}s1;
*/
struct student
{
	int reg;
	    struct result
		    {
	        int marks;	
            }r1;
}s1;
main()
{
	s1.reg=1;
	s1.r1.marks=90;
	printf("%d\n",s1.reg);
	printf("%d\n",s1.r1.marks);
}
