//Insertion & Deletion
#include<stdio.h>
main()
{
	int ar[5]={1,2,4,5,6};
	int n=5; // total elements
	int i=0; //loop variable
	int index=2; //location of entering the element
	int value=3;
	printf("The elements of array before insertion:");
	for (i=0;i<n;i++)
	{
		printf("%d",ar[i]);	
	}
	//shifting to right
	for(i=n;i>=index;i++)
	{
		ar[i]=ar[i+1];
	}
	ar[index]=value;
	n++;
printf("\nThe elements of array after insertion:");
for(i=0;i<n;i++)
    {
    	printf("%d",ar[i]);
	}
    


}

