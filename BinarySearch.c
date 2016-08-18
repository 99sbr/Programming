#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Binary_Search(int Array[], int size, int to_search)
{
	int start,end,mid;
	start=0;
	end=size-1;
	while(start<=end)
	{
		mid= (start+end)/2;
		if(Array[mid]== to_search) return 1;
		else if(to_search<Array[mid])
		{
			end=mid-1;
		}
		else 
		{
			start=mid+1;
		}
	}
	return -1;
}

int main()
{
	printf("Enter the size of Array:\n");
	int size,i;
	scanf("%d",&size);
	int Array[size];
	for(i=0;i<size;i++)
	{
		printf("Enter the elements in sorted form:\n");
		scanf("%d",&Array[i]);
	}
	printf("Enter the element to search:\n");
	int to_search,response;
	scanf("%d",&to_search);
	response=Binary_Search(Array,size,to_search);
	if (response==1) 
	{
		printf("Found\n");
	}
	else if(response==-1 )
	{	
		printf("Not found\n");
	}
}