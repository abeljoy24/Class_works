#include<stdio.h>
int main()
{
	int num;
	int i=1;
	int fact=1;
	printf("Enter the no.:");
	scanf("%d",&num);
	while(i<=num)
	{
	fact*=i;
	i++;
	}
	printf("%d",fact);
	return 0;
}
