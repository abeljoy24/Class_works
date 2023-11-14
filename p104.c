#include<stdio.h>
#include<string.h>
union data 
{
	int i;
	float f;
	char str[20];
};
struct meta
{
	char str[20];
	int i;
	float f;
}
main()
{
	union data d;
	struct meta m;
	
	printf("Size of the structure is %d\n",sizeof(d));
	printf("Size of the union is %d\n",sizeof(m));
}

