#include <stdio.h>
#include <stdlib.h>

// recursive method

struct node
{
	int data;
	struct node* next;

};

struct node* head;
struct node* Insert(struct node* head,int value)
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=head;
	head=temp;
	return head;
}
void Print(struct node* p)
{	if(p==NULL)
	{	printf("\n");
		return;
	}
	printf(" %d",p->data );
	p=p->next;
	Print(p);
}
int main()
{
	head=NULL;
	printf("Enter the number of nodes: \n");
	int i,n,value;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter the list value:\n");
		scanf("%d",&value);
		head=Insert(head,value);

	}
	printf("The list is : \n");
	Print(head);
}