// find the sum of the elements of the array
#include<stdio.h>
main()
{
	int arr[5];
	int i,sum=0;
	
	printf("Enter the elements: \n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
    }
    
    printf("Showing the elements:");
    for(i=0;i<6;i++)
    {
    	printf("%d ",arr[i]);
    	sum=sum+arr[i];
	}
printf("\n The sum is %d\n",sum);

int s=0,m=0;
for(i=0;i<5;i++)
{
	if(arr[i]%2==0)
	{
		printf("\n The even no. is: %d",arr[i]);
		s=s+arr[i];
	}
	else
	{
		printf("\n The odd no. is: %d",arr[i]);
		m=m+arr[i];
	}
	printf("\n The sum of even no.s: %d",s);
		printf("\n The sum of odd no.s: %d\n",m);
}
int sm;
sm=arr[0];
for(i=0;i<5;i++)
{
	if(arr[i]<sm)
	{
		sm=arr[i];
	}
}
printf("\n\nThe smallest no. is: %d",sm);

int lg;
lg=arr[0];
for(i=0;i<5;i++)
{
	if(arr[i]>lg)
	{
		lg=arr[i];
	}
}
printf("\n\nThe largest no. is: %d",lg);



}



