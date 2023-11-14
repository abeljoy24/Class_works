#include<stdio.h>
#include<string.h>
struct stud
{
	int reg;
	int marks[5];
}s1;
main()
{
	int i;
	//s1={1,{90,99,92}};

	s1.reg=1;
	printf("Enter the marks obtained :\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&s1.marks[i]);
	}

	printf("The marks of Reg no. %d is:\n",s1.reg);
	for(i=0;i<5;i++)
	{
		printf("%d \n",s1.marks[i]);
	}
}
