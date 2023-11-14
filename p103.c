#include<stdio.h>
#include<string.h>
union data 
{
	int i;
	float f;
	char str[20];
};

main()
{
	union data d;
	strcpy(d.str,"abc");
	printf("%s \n",d.str);
	d.i=76;
	d.f=9.7;
	
	printf("%d \n",d.i);
	printf("%f \n",d.f);
	
}

