#include <stdio.h>
#include <math.h>
int main()
{
	int a=1,b=0,c=6,max;
	switch(0)
		{
			case 0 : max=a;
			default: max=b;
		
		}
	switch(max/c)
		{
			case 0: max=c;
			default: max=max;
		}
	printf("%d\n",max);
	int d=1,n,maxi=-99999,sum=1,avg=0,count=-1;
		while(d!=-1)
			{
				printf("ENter the number\n");
				scanf("%d",&n);
				
				sum=sum+n;
				count=count+1;
					
				if(n>maxi)
					{
						maxi=n;
					}
				d=n;	
			}
	avg=sum/count;
	printf("%d\n",maxi );
	printf("%d\n",sum );
	printf("%d\n",avg );
}