#include<stdio.h>
#include<string.h>
/*
main()
{
char s[20]="I am a student";
printf("%d\n",strlen(s));	
//puts(strrev(s));
printf("\n");
puts(strlwr(s));
printf("\n");
puts(strupr(s));
int i;
for(i=0;i<20;i++)
{
	
  if(s[i]=='\0')
  break;

  
  	
}
int j;
printf("\n%d",i);
while(s[j]=='\0')
{
	j++;

}
	printf("\n%d",j);
}*/
main()
{
int i,j;
char s[20]="I am a student";
j=strlen(s)-1;
int x;
while(i<j){
	x=s[i];
	s[i]=s[j];
	s[j]=x;
	i++;
	j--;
}
printf("%s",s);

}
