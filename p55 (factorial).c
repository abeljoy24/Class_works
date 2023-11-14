#include<stdio.h>
int fact1(int); //decleration
main()
{
	int a;
	printf("Enter value of a for factorial: ");
	scanf("%d",&a);
	printf("factorial is: %d",fact1(a));
}

int fact1(int x)
{
	if(x==0 || x==1)
	return 1;
	else
	return x*fact1(x-1);
}
