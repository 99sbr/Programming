#include <stdio.h>

int max(int a[])
	{
		int high,i;
		high=a[0];
		for (i=0;i<10;i++)
			{
				if (a[i]>=high)
				{
					high=a[i];

				}
				else
				{
					high=high;

				}

			}

		return high;
	
	}

int main() 
	{
		int num,maximum,i;
		int a[10];
			for(i=0;i<10;i++)
			{
				scanf("%d",&a[i]);

			}
		maximum=max(a);
		printf("maximum number is %d\n", maximum);
	return 0;
	}
