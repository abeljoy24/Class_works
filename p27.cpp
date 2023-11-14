#include<stdio.h>
main()
{
	int a=2, b=4; // binary of a=00000010, b=00000100
	printf("a&b = %d",a&b);
       printf("\na||b = %d",a||b);	
       printf("\na^b = %d",a^b);
    
    printf("\n\nLeft shift a<<2 = %d",a<<2);
    printf("\nRight shift a>>2 = %d",a>>2);
}
