#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
struct node
	{
	  int data;
	  struct node* next;
	};

struct node* top=NULL;


struct node* GetNewNode(int x)
{
	struct node* newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=x;
	newNode->next=NULL;
	return newNode;
}

void Push(int x)
{
	struct node* newNode= GetNewNode(x);
	newNode->next=top;
	top=newNode;
}

void Print()
{	printf("Elements of Stack are:\n");
	
		printf("%d\n",top->data);
		top=top->next;

}

void PoP()

{	struct node *newNode;
	if(top==NULL) return;
	newNode=top;
	top=top->next;
	free(newNode);
}
void main()
	{ 
		int n,i,push_count,pop_count,elm;
	 	printf("Enter the size of Stack\n");
		scanf("%d",&n);
		if(n>SIZE)
		{
			printf("Error!!\n");
		}
		else
		{
			printf("How many numbers you want to push\n");
			scanf("%d",&push_count);
			for(i=1;i<=push_count;i++)
			{
				printf("Enter the element\n");
				scanf("%d",&elm);
				Push(elm);
			}
			Print();
			printf("%d\n",top->data);

			printf("How many times you want to pop\n");
			scanf("%d",&pop_count);
			for(i=1;i<=pop_count;i++)
			{
				PoP();
			}
			Print();
		}
	}
