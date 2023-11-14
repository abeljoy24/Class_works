//pointer
#include<stdio.h>
main()
{
	int a=9;
	int *aptr;
	aptr=&a;
	
	printf("Value of a:%d\n",a);
	printf("Addres of a:%u\n",&a);
	
	printf("Address of aptr(pointer):%u\n",&aptr);
	
	printf("Address of a as aptr value:%d\n",aptr);
	
	printf("Value at (of address)aptr is:%d",*aptr);
}
