#include<stdio.h>
main()
{
	int i, n, fact=1;
	int *pn, *pfact;
	pn=&n;
	pfact=&fact;
	printf("Enter value for pn\n");
	scanf("%d",pn);
	
	for(i=1;i<*pn;i++)
	{
		*pfact=*pfact*i;
	}
     printf("The factorial value is:%d",*pfact);
}
