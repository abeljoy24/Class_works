//pointer to 1D
#include<stdio.h>
main()
{
	int a[5];
	int *ptr,i;
	ptr=a;
	printf("Enter the elements for array:");
	for(i=0;i<5;i++)
	{
		scanf("%d ",&a[i]);
	}
	printf("The elements of the array:");
	for(i=0;i<5;i++)
	{
		printf("%d ",*(ptr+i));
	}
}
