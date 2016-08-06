#include <stdio.h>     // pre=processor directives: // #define is for macro 

int main()
{
	char c[50];
	printf("Enter a string\n");
	scanf("%s",c);
	int i=0,length=0,d;
	while(c[i]!='\0')
	{
		i=i+1;
		length=length+1;
	}
	printf("%d\n",length);
	//Different approach
	d=printf("%s",c);
	printf("\n");
	printf("%d\n", d);
}