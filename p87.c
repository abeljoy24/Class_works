//find the area of circles using pointers
#include<stdio.h>
main()
{
	int a[3]={1,2,3};
	int *ptr[3],i;
	
	for(i=0;i<3;i++)
	{
		ptr[i]=&a[i];
	}
	printf("Print the elements using pointer: ");
	for(i=0;i<3;i++)
	{
		printf("%d ",*ptr[i]);
	}
}
