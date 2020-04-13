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
int main()
{
	head=NULL;
	printf("How many elements  to add: \n");
	int element,i,number;
	scanf("%d",&number);
	for(i=0;i<number;i++)
	{	
		printf("Enter the number:\n");
		scanf("%d",&element);
		Insert(element);
		Print();
	}
}