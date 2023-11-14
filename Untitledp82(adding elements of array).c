//wap to find the sum of all the elements of an array using pointers
#include<stdio.h>
main()
{
	int a[]={1,20,3,40,5};
	int *p=a;
	int i,f=0;
	for(i=0;i<5;i++)
	{
			printf("%d  ",*(p+i));
			f=f+*(p+i);
			
	}
	printf("\n\nSum of all elements:%d",f);
	
} 
