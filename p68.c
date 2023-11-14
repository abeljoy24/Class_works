#include<stdio.h>
void ref1(int x[], int s);
main()
{
	int arr[6]={1,2,3,4,5};
	ref1(arr,5);     //function call which having parameter as an array
}
void ref1(int x[],int size)
{
	//x[6]={1,2,3,4,5,6}
	printf("%d",x[0]);
}
