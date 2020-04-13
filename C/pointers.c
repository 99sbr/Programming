#include <stdio.h>

void main()
{   // testing pointers
	int a,b;
	int * ptr;
	ptr=&a;
	a=3;
	b=2;
	printf("\n");
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%p\n",ptr );

	// poninter and arrays

	int my_array[10],i;
	printf("Enter the elements of array: \n ");

	for(i=1;i<=10;i++)
		{
			scanf("%d",&my_array[i]);
		}
	int * p;
	p=my_array;
	// we can also use p=&my_array[0];

	for(i=1;i<=10;i++)
		{
			printf("\n");
			printf("%d\n",*(++p));
		}
}