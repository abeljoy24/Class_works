#include<stdio.h>
struct emp
{
	char name[20];
	int age;
	float salary; 
}
main()
{
	
	int i;
	struct emp e[100];
	for (i=0;i<2;i++)
	{
		printf("Enter the name, age and salary\n");
		gets(e[i].name);
		scanf("%d",&e[i].age);
		scanf("%f",&e[i].salary);
		fflush(stdin);
	}
	for (i=0;i<2;i++)
	{
		printf("Name is :%s\n",e[i].name);
		printf("Age is :%d\n",e[i].age);
		printf("Salary is :%f\n",e[i].salary);
	}
}
	
	
