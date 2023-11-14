#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int a=345;
	char str[20];
	itoa(a,str,2);
	printf("Binary value is:%s",str);
}
