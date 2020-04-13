#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};

void PrintList(struct node *n)
{
	while(n!=NULL)
	{
		printf("%d\n", n->data);
		n=n->next;
	}
}
int main()
{
	struct node* head= NULL;
	struct node* second= NULL;
	struct node* third= NULL;
	// Allocate 3 nodes in heap;
	head= (struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));

	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;
	PrintList(head);
	return 0;
}