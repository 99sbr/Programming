#include <stdio.h>
int main()
{
	char a=0x81;
	unsigned char b=0x81;
	if(a==b)
	{
		printf("same\n");
	}
	else
	{
		printf("Not same\n");
	}
	
int i ,n=20;
for(i=0;i+n;i--)
{
	printf("*\n");
}
int n1,n2,n3,n4,max;
scanf("%d",&n1);
scanf("%d",&n2);
scanf("%d",&n3);
scanf("%d",&n4);

if(n1>n2)
{
	if(n1>n3)
	{
		max=n1;
	}
	else{
		max=n3;
	}

}
else{
	if(n2>n3)
	{
		max=n2;
	}
	else
	{
		max=n3;
	}
}
printf("%d\n", max);
}