//to find the no. of digits in a figure
#include<stdio.h>
main()
{
	
	int digit, count=0;
	int n;
	printf("Enter the no. whose length to be found:");
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		count=++;
		n=n/10;
	
	}
	printf("%d",digit);
	
}
