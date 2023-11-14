#include<stdio.h>
main()
{
	char g;
	int a=10,b=5,c;
	printf("Enter your choice of no. : ");
	scanf("%d",&g);
	switch(g)
	{
		case 'a':
			printf("Your choice is addition");
			    c=a+b;
			    printf("Addition is %d",c);
		break;
		
		case 's':
			printf("Your choice is 2");
			    c=a-b;
			    printf("Subtraction is %d",c);
		break;
		
		default:
			printf("Choice not present.");
	}
	
}
