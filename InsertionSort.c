#include <stdio.h>

int Insertion_Sort(int Array[],int size)
{	
	int i,hole,value;
	for(i=1;i<size;i++)
	{
		value=Array[i];
		hole=i;
		while(hole >0 && Array[hole-1]>value)
		{
			Array[hole]=Array[hole-1];
			hole=hole-1;
		}
		Array[hole]=value;
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

	Insertion_Sort(Array,size);
	

}