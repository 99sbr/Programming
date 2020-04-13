
//  iterative method to reverse a link list

#include <stdio.h>
#include <stdlib.h>

struct Node
	{
		int data;
		struct Node* Next;
		
	};

struct Node* Head;

struct Node* Insert(struct Node* Head, int value)
	{
		struct Node* temp;
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp->data=value;
		temp->Next=Head;
		Head=temp;
		return Head;
	}

void Print(struct Node* Head)
	{
		
		printf("The List is: \n");
		
		while(Head!=NULL)
			{
				printf(" %d",Head->data);
				Head=Head->Next;
			}
		printf("\n");
	}

struct Node* Reverse(struct Node* Head)
{
	struct Node* current,*prev,*Next;
	current=Head;
	prev=NULL;
	while(current!=NULL)
	{
		Next=current->Next;
		current->Next=prev;
		prev=current;
		current=Next;
	}
	Head=prev;
	return Head;
}
int main()
	{
		Head=NULL;
		printf("Enter the number of Nodes for Linklist\n");
		int n,i,value;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
			{
				printf("Enter the data for the Node:\n");
				scanf("%d",&value);
				Head=Insert(Head,value);
				Print(Head);
			}
		Head=Reverse(Head);
		Print(Head);
	}
