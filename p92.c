#include<stdio.h>
#include<string.h>
main()
{
	char s1[50]="I am a student";
	char s2[20]=" at LPU";
	//strcat(s1,s2);
	strncat(s1,s2,2);
	printf("%s\n",s1);
	
	printf("\n\n");
	
	char s3[10]="heLlo";
	char s4[10]="hello";
	int x;
	//x=strcmp(s3,s4);
	x=strncmp(s3,s4,4);
	printf("%d",x);
		
	printf("\n\n");
	
	char s5[10]=" hello ";
	int y;
	y=strlen(s5);
	printf("%d",y);
		
	printf("\n\n");
	
	char s6[10]="guys";
	strrev(s6);
	printf("%s",s6);
			
	printf("\n\n");
	
	char s7[20]="BLA bla BLACK sheep\n";
	strupr(s7);
	printf("%s",s7);
	strlwr(s7);
	printf("%s",s7);
	
}
