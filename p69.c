#include<stdio.h>
void ref1(int x[], int s);
main()
{
	int arr[6]={9,2,3,4,5};
	ref1(arr,5);     //function call which having parameter as an array
}
void ref1(int x[],int size)
{
	//x[6]={1,2,3,4,5,6}
	printf("%d",x[0]);

int min=x[0];
int i=0;
for(i=0;i<5;i++)
{
	if(min>x[i])
	{
		min=x[i];
	}
}
printf("\n\nThe smallest no. is: %d",min);



}
