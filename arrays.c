#include <stdio.h>

int Maximun(int Array[],int array_size)
	{	
		int max=0,i;
		max=Array[0];
		for(i=0;i<array_size;i++)
		{
			if(Array[i]>max)
			{
				max=Array[i];
			}
		}

		return max;
	}

int Minimum(int Array[],int array_size)
	{	
		int min=0,i;
		min=Array[0];
		for(i=0;i<array_size;i++)
		{
			if(Array[i]<min)
			{
				min=Array[i];
			}
		}

		return min;
	}

int *Sort_Increasing(int Array[], int array_size)
	{	
		int i,j,a;
		for (i=0;i<array_size;++i)
		{
			for(j=i+1;j<array_size;++j)
			{
				if(Array[i]>Array[j])
				{
					a=Array[j];
					Array[j]=Array[i];
					Array[i]=a;
				}
			}
		}
		return Array;
	}

int *Sort_Decreasing(int Array[], int array_size)
	{	
		int i,j,a;
		for (i=0;i<array_size;++i)
		{
			for(j=i+1;j<array_size;++j)
			{
				if(Array[i]<Array[j])
				{
					a=Array[j];
					Array[j]=Array[i];
					Array[i]=a;
				}
			}
		}
		return Array;
	}

int *Insert(int Array[],int array_size,int index,int Element)
{
	int i;
	for(i=array_size;i>index;i--)
	{
		Array[i]=Array[i-1];
	}
	Array[index]=Element;
	return Array;
}

int *Delete(int Array[],int array_size,int index)
{	int i;
	for(i=index;i<=array_size;i++)
	{
		Array[i]=Array[i+1];
	}
	return Array;
}

int main()
	{	int array_size,i,max,min,index,Element;
		printf("Enter the Size of Array:\n");
		scanf("%d",&array_size);
		int Array[array_size];
		printf("Enter the elements of array: \n");

		for(i=0;i<array_size;i++)
			{
				scanf("%d",&Array[i]);

			}
		
			while(1)
			{
				printf("Enter the Option Number\n");
				printf("(1) Find Maximun\n(2) Find Minimum\n(3)Sort Increasing\n(4)Sort Decreasing\n(5) Insert Element\n(6) Delete Element\n(7) Exit\n");
				int option;
				scanf("%d",&option);
				
				
					switch(option)
						{
					      	case 1:
					      		
					        	printf("you have selected option 1\n");
					        	max=Maximun(Array,array_size);
					        	printf("Maximun from Array is: \n");
					        	printf("%d\n",max);
					        	break;
					         
					      	case 2 :
					      		printf("you have selected option 2\n");
					      		min=Minimum(Array,array_size);
					      		printf("Minimum from Array is: \n");
					        	printf("%d\n",min);
					      		break;
					      	case 3:
					        	printf("you have selected option 3\n");
					        	Sort_Increasing(Array,array_size);
					        	printf("Sorted Array is: \n");
					        	for (i=0;i<array_size;i++)
					        	{
					        		printf("%d\n",Array[i] );
					        	}
					      		break;
					     	case 4:
					        	printf("you have selected option 4\n");
					        	Sort_Decreasing(Array,array_size);
					        	printf("Sorted Array is: \n");
					        	for (i=0;i<array_size;i++)
					        	{
					        		printf("%d\n",Array[i] );
					        	}
					       		break;
					      	case 5:
					        	printf("you have selected option 5\n");
					        	printf("At which index you want to insert? \n");
					        	scanf("%d",&index);
					        	printf("Enter the Element: \n");
					        	scanf("%d",&Element);
					        	Insert( Array,array_size,index, Element);
					        	for(i=0;i<=array_size;i++)
					        	{
					        		printf("%d\n",Array[i]);
					        	}
					        	break;
					      	case 6:
					      		printf("you have selected option 6\n");
					      		printf("Enter the index you want to delete: \n");
					      		scanf("%d",&index);
					      		Delete(Array,array_size,index);
					      		for (i = 0; i <array_size-1;i++)
					      		{
					      			printf("%d\n",Array[i] );
					      		}
					      		break;
					      	case 7:
					      		return 0;

					      	default :
					        	printf("Invalid grade\n" );
				         }
			}	
			
		
	}