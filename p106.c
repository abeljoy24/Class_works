#include<stdio.h>
#include<string.h>
main()
{
	char s1[20]="I am a student.";
	int i;
	i=strlen(s1);
	printf("%d\n",i);
	printf("%s\n",strupr(s1));
	printf("%s\n",strlwr(s1));
	printf("%s\n",strrev(s1));

}
