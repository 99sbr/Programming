#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* front=NULL;
struct node* tail=NULL;

struct node* GetNewNode(int x)
{
	struct node* newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=x;
	newNode->next=NULL;
	return newNode;
}

void Enqueue(int x)
	{
		struct node* newNode=GetNewNode(x);
		if(front==NULL && tail== NULL)
		{
			front=tail=newNode;
			return;
		}
		tail->next=newNode;
		tail=newNode;
	}
void Dequeue()
{
	struct node* temp=front;
	if(front==NULL) return;
	if (front==tail)
	{
		front=tail=NULL;
	}
	else
	{
		front=front->next;
	}
	free(temp);
}

void Print()
{	
	if(front==NULL) return;
	struct node* temp=front;
	while(temp!=tail)
	{
		printf("queue: %d\n",temp->data);
		temp=temp->next;
	}
	printf("queue: %d\n",temp->data);
}
void main()
{	int n,i,x;
	printf("Enter how many numbers you want to insert\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number\n");
		scanf("%d",&x);
		Enqueue(x);
	}
	Print();
	printf("How many times you want to Dequeue\n");
	int z,j;
	scanf("%d",&z);
	if(z>n)
	{
		printf("Error\n");
	}
	else
	{
		for(j=0;j<z;j++)
		{
			Dequeue();
		}
	}
	Print();
}