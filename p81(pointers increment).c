#include<stdio.h>
main()
{
	int a[]={1,2,3,4,5};
	int *p=a;
	int i;
	for(i=0;i<5;i++)
	{
			printf("%d  ",*(p+i));
	}
	
}
