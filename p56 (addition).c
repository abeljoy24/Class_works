#include<stdio.h>
int fact1(int); //decleration
main()
{
	int a;
	printf("Enter a for complete addition: ");
	scanf("%d",&a);
	printf("Sum is: %d",fact1(a));
}

int fact1(int x)
{
	if(x==0)
	return 0;
	else
	return x+fact1(x-1);
}
