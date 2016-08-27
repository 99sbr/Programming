#include <stdio.h>


int factorial(int k)
{	
	int fact=1;
	if(k==0) return fact;
	while(k>0)
	{
		fact=k*fact;
		k--;
	}
	return fact;
}


int Binomial(int line,int index)
{
	if(line<index) return 0;
	int value;
	value=factorial(line)/(factorial(line-index)*factorial(index));
	return value;
}


int main()
{
	int n,i,j;  // number of rows of pascal's triangle
	printf("Enter thr number of rows in pascal triangle\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d\t",Binomial(i,j));
		}
		printf("\n");
	}
}