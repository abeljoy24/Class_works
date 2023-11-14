#include<stdio.h>
main()
{
	int a=40,b=50,c=30;
	if(a>b)
	    {
	    	if(a>c)
	    	    {
	    	    	printf("a is greater");
			    }
			else
			    {
				    printf("c is greater");
				}
		}
	else
	    {
	    	if(b>c)
	    	    printf("b is greater");
	    	else
	    	    printf("c is greater");
		}
}
