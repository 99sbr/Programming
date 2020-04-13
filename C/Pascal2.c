#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("Enter the number of lines to be added in Pascal's triangle\n");
	int lines;
	scanf("%d",&lines);
	int arr[lines][lines];
	int i,j;
	for(i=0;i<lines;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0 || i==j)
			{
				arr[i][j]=1;
			}
			else
			{
				arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
			}
		}
	}


	int k,l;
	for(k=0;k<lines;k++)
	{
		for(l=0;l<=k;l++)
		{
			printf("%d\t",arr[k][l] );
		}
		printf("\n");
	}
}