//Linked List: Inserting a node at the begining
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* head;

void Insert(int element)
{
	struct node* temp;
	temp= (struct node*)malloc(sizeof(struct node));
	temp->data=element;
	temp->next=head;
	head=temp;

}
void Print()
{
	struct node* temp= head;
	printf("The list is: ");
	while(temp!=NULL)
		{
			printf(" %d",temp->data);
			temp=temp->next;
		}
	printf("\n");
}

int Count()
{
	struct  node* temp=head;
	int length=0;
	while(temp!=NULL)
	{
		temp=temp->next;
		length=length+1;
	}
	return length;
}
void New_Insert(int element, int position)
	{
		struct node* temp1;
		temp1= (struct node*)malloc(sizeof(struct node));
		struct node* temp2;
		temp2= (struct node*)malloc(sizeof(struct node));
		temp2=head;
		temp1->data=element;
		temp1->next=NULL;
		if(position==1)
			{
				temp1->next=head;
				head=temp1;
				return;
			}
		int i;
		for(i=0;i<=position-2;i++)
			{
				temp2=temp2->next;

			}
		temp1->next=temp2->next;
		temp2->next=temp1;
	}

void Delete(int position)
{
		struct node* temp1;
		int i,length;
		temp1= (struct node*)malloc(sizeof(struct node));
		temp1=head;
		struct node* temp2;
		temp2= (struct node*)malloc(sizeof(struct node));
		length=Count();
		if(position==1)
			{
				//temp1=temp1->next;
				head=temp1->next;
				free(temp1);
				return;
			}
		else if(position==length)
			{
				for(i=1;i<=length-1;i++)
				{
					temp1=temp1->next;

				}
				temp1=NULL;
				return;

			}
	
		
		for (i=1;i<position-1;i++)
			{
				temp1=temp1->next;
			}

		temp2=temp1->next;
		temp1->next=temp2->next;
		free(temp2);
		return;
		
}

int main()
{
	head=NULL;
	printf("How many elements  to add: \n");
	int element,i,number;
	scanf("%d",&number);
	for(i=1;i<=number;i++)
		{	
			printf("Enter the number:\n");
			scanf(" %d",&element);
			Insert(element);
			Print();
		}

	printf("Link list has been created.\n");
	printf("Enter the  new node data\n");
	int new_data,position;
	scanf("%d",&new_data);
	printf("Enter the position to be inserted in:\n");
	scanf("%d",&position);

	New_Insert(new_data,position);
	Print();

	// Deleting node 
	printf(" Enter the position of node to Delete:\n");
	int Delete_pos;
	scanf("%d",&Delete_pos);
	Delete(Delete_pos);
	Print();

}