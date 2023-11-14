//2D array
#include<stdio.h>
main()
{
	int a[2][2]={{1,2},{3,4}};
	int a1[2][2]={2,3,4,5};
	int a2[2][2]={{1},{3,4}};
	int a3[2][2]={0};
	int a4[][2]={1,2,3};
	//int a5[2][]={1,2,3};    *not possible without column no.
	int i,j;
	
	printf("Show the elements of the arrays:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}
}
