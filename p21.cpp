//swapping without 3rd no.

#include<stdio.h>
main()
{
	int a,b;
	printf=("Enter values for a & b:");
	scanf("%d%d",&a,&b);
	printf("The values of a & b are=%d %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The values of swapped a & b are=%d %d",a,b);
}
