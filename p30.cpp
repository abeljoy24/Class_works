#include<stdio.h>
main()
{
	int a,b;
	printf("Enter a value :");
	scanf("%d",&a);
	printf("Enter b value :");
	scanf("%d",&b);
	if (a>b)
	    {
		    printf("a is greater");
	    }
	if (a==b)
	    {
	    	printf("a is equal to b");
		}
		
	if (a<b)
	    {
	    	printf("b is greater");
		}
	else
	    {
	    	printf("Error");
		}
}
