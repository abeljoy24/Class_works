#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	int age;
};

void show(struct student s);
main()
{
	struct student s1={1,21};
	//call the fuction
	show(s1);
};

void show(struct student s)
{
	struct student s2;
	printf("ID is %d\n",s.id);
	printf("Age is %d",s.age);
	s2.age=32;
	s2.id=50;
	return s2;
}
