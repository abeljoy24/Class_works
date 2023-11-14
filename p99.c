#include<stdio.h>
struct emp
{
	char name[20];
	int age;
	float salary; 
}
main()
{
	struct emp e1={"Rohith",20,40000};
	struct emp *ptr;
	ptr=&e1;
	printf("Name: %s, Age: %d, Salary: %.2f\n",e1.name,e1.age,e1.salary);
	printf("Name: %s, Age: %d, Salary: %.2f\n",ptr->name,ptr->age,ptr->salary);
	printf("Name: %s, Age: %d, Salary: %.2f\n",(*ptr).name,(*ptr).age,(*ptr).salary);
}
