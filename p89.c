// malloc()
#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,n,i;
	printf("Enter the no. of integers to be used:");
	scanf("%d",&n);
	p=(int*)malloc(n*(sizeof(int)));
	if(p==NULL)
	{
		printf("No memory available");
		exit(1);
	}
	else
	{
		printf("Memory allocation was successful.\n");
		printf("Enter the values: \n");
		for(i=0;i<n;i++)
		{
			scanf("%d",p+i);
		}
		for(i=0;i<n;i++)
		{
			printf("%d \n",*(p+i));
		}
	}
	
	
	
}
