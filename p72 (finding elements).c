#include<stdio.h>
main()
{
	int a[50];
	int i, loc=-1,key,n=5; //here, n is the no. of elements
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
    key=3; // value to be searched

    for(i=0; i<n; i++)
        {
        	if (a[i]==key)
        	{
        		loc=i;
        		break;
			}
    	}
		if(loc!=-1)
		{
			printf("\n Element found: %d",loc+1);
		}
        else
        {
		    printf("\n Element not found.");	
		}
}
