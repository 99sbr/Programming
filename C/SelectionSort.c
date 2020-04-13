#include <stdio.h>

int Selection_Sort(int Array[],int size)
{	int i,j,iMin,temp;
	for(i=0;i<size-1;i++)
	{
		iMin=i;
		for(j=i+1;j<size;j++)
		{
			if (Array[j]<Array[iMin])
			{
				iMin=j;
			}
		
			temp=Array[i];
			Array[i]=Array[iMin];
			Array[iMin]=temp;
		}
	}
	int k;
	printf("Elements of sorted array:\n");
	for(k=0;k<size;k++)
	{
		printf("%d\t",Array[k]);
	}
}

int main()
{
	printf("Enter the size of Array\n");
	int size,i;
	scanf("%d",&size);
	int Array[size];
	for(i=0;i<size;i++)
	{	
		printf("Enter the number: \n");
		scanf("%d",&Array[i]);
	}

	Selection_Sort(Array,size);
	

}