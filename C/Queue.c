#include <stdio.h>
#include <string.h>
#define SIZE 20

int front=-1;
int rear=-1;
int Queue[SIZE];
void Enqueue(int n)
{
	
	Queue[rear]=n;
	rear=rear+1;
	return;
}
void Dequeue()
{
	front=front+1;
}
void Peck()
{
	int n;
	n=Queue[rear];
	printf("peck %d\n",n);
}
void Front()
{
	int n;
	n=Queue[front];
	printf("Front %d\n",n);
}
void IsEmpty()
{
	if(rear==front)
	{
		printf("IsEmpty");

	}
	else printf("false");
}
void Print()
{
	int i;
	for(i=front;i<rear;i++)
	{
		printf("Queue is : %d \n",Queue[i]);
	}

}
int main()
{
	Enqueue(1);
	Enqueue(2);
	Enqueue(3);
	Enqueue(4);
	Enqueue(5);
	Print();
	printf("\n");
	Dequeue();
	Print();
	printf("\n");
	Peck();
	Front();
	IsEmpty();
}