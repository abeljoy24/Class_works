#include<stdio.h>
main()
{
	int a[2][2];
	int i,j;
	printf("Enter the elemnts in the array:\n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Showing the elements of the arrays:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}
}
