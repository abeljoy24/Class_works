#include<stdio.h>
main()
{
	int n;
	for (n=10; n<=20; n++)
	{		
		if(n%2==1)
		{
			continue;
		}
		
		printf("%d\n",n);
	}
}
