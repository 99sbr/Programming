#include <stdio.h>
#include <stdlib.h>
#define size 5

int Partition(int Array[],int start,int end)
{
	int pivot,pIndex,i,temp;
	pivot=Array[end];
	pIndex=start;
	for(i=start;i<end;i++)
	{
		if(Array[i]<=pivot)
		{
			temp=Array[i];
			Array[i]=Array[pIndex];
			Array[pIndex]=temp;
			pIndex++;
		}
	}
	
	temp=Array[pIndex];
	Array[pIndex]=Array[end];
	Array[end]=temp;
	return pIndex;

}

int *Quick_Sort(int Array[] , int start,int end)
{	
	if(start<end) 
	{
	int pIndex;
	pIndex=Partition(Array,start,end);
	Quick_Sort(Array,start,pIndex-1);
	Quick_Sort(Array,pIndex+1,end);

	return Array;
}
}

int main()
{
	
	int i,start,end;
	
	int Array[size];
	start=0;
	end=size;
		for(i=0;i<size;i++)
			{	
				printf("Enter the number: \n");
				scanf("%d",&Array[i]);
			}
	Quick_Sort(Array,start,end);	
	int k;
	printf("Elements of sorted array:\n");
	for(k=0;k<size;k++)
	{
		printf("%d\t",Array[k]);
	}
	
}