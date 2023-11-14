#include<stdio.h>
main()
{
	int age,b;
	b=18;

	printf("Enter your age: ");
	scanf("%d",&age);
	(age>b)?(printf("You are eligible to vote")):(printf("You are not eligible to vote"));
}
