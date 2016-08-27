#include <stdio.h>
#include <string.h>

void main()
{
	printf("Enter a string:\n");
	char input[20];
	scanf("%s",input);
	int length=strlen(input);
	int i;
	int flag=1;
	for(i=0;i<length;i++)
	{
		if(input[i]!=input[length-1-i])
		{
			flag=0;
		}
	}
	if(flag==1) printf("Is palindrome\n");
	else printf(" Not palindrome\n");
}