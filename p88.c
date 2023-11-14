//pointer to pointer
#include<stdio.h>
main()
{
	int i, *j, **k;
	j=&i;
	k=&j;
	printf("Address of i=%d, j=%d, k=%d",&i,&j,&k);
	
}
