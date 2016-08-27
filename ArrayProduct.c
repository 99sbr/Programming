#include <stdio.h>

//Given an array of n integers,
// return a product aray in which the ith element is obtained by taking 
//the product of all elements of the array except the ith element. Expected time complexity – O(n).

int main()
{
	printf("Enter the size of aaray\n");
	int size,i,j,k;
	scanf("%d",&size);
	int a[size],p[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int prod=1;
	for(i=0;i<size;i++)
	{
		prod=prod*a[i];
	}
	
	for(j=0;j<size;j++)
	{
		p[j]=prod/a[j];
	}
	
	for(k=0;k<size;k++)
	{
		printf("%d ", p[k]);
	}

}