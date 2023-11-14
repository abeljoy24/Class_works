#include<stdio.h>
int main()
{
	int num;
	int sum=0;
	do
	{
		printf("Enter the number:");
		scanf("%d",&num);
	}
	while(num>=0);
	printf("%d",sum);
	
	return 0;
}
