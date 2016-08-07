#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* head;

struct node* Insert(int value,int position)
	{
		struct node* temp1;
		temp1=(struct node*)malloc(sizeof(struct node));

		temp1->data=value;
		temp1->next=head;
		head=temp1;
		return head;
	}

void Reverse(struct node* p)
	{
		if(p->next==NULL)
			{
				head=p;
				return;
			}
		Reverse(p->next);
		struct node*q=p->next;
		q->next=p;
		p->next=NULL;
	}

void Print(struct node* p)
	{
		if(p==NULL) return;
		Print(p->next);
		printf("%d\n",p->data );
	}
int main()
{
	head=NULL;
	head=Insert(5,2);
	head=Insert(3,1);
	head=Insert(2,3);
	head=Insert(4,4);
	head=Insert(0,5);
	Print(head);
	Reverse(head);
	printf("\n");
	Print(head);
}
