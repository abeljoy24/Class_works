#include<stdio.h>
int main()
{
	int num;
	int i=0;
	int sum=0;
	printf("Enter the no.:");
	scanf("%d",&num);
	while(i<=num)
	{
	sum+=i;
	i++;
	}
	printf("%d",sum);
	return 0;
}
