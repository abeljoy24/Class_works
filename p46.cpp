#include<stdio.h>
main()
{
	int n;
	for (n=10; n<=20; n++)
	{		
		if(n%2==1)
		{
			goto abc;
		}
		
		printf("%d\n",n);
	abc:
	    printf(" -> Change the value");
	printf("%d\n",n);	
	}
	
}
