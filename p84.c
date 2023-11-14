#include<stdio.h>
main()
{
	int x=10,b=9;
	char c='A';
	void*ptr;
	
	ptr=&x;
	printf("Value of generic ptr is: %d\n",*(int*)ptr);
	
	ptr=&c;
	printf("Value of generic ptr is: %c",*(char*)ptr);
	
}
