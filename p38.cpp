#include<stdio.h>
main()
{
	int n, a=0, b=1,c,i;
	n=10;
	printf("%d\n",a);
	    printf("%d\n",b);
	    
	for(i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
}
