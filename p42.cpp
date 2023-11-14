#include<stdio.h>
main()
{
	char g;
	printf("Enter your choice of charecter : ");
	scanf("%c",&g);
	switch(g)
	{
		case 'a':
			printf("Your choice is a");
		break;
		
		case 'b':
			printf("Your choice is b");
		break;
		
		default:
			printf("Choice not present.");
	}
	
}
