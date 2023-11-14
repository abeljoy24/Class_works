//bubble sort 
#include<stdio.h>
main()
{
	int i,n=6,j,hold;
	int a[6]={3,2,1,6,5,4};
	for (i=0;i<n-1;i++)   //loop for controlling passes
	{
		for(j=0;j<n-i-1;j++)   //for element 
		{
			if (a[j]>a[j+1])    //element swapping
			{
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
			}
		
		}	
	}
	printf("The sorted elements are:");
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
}
