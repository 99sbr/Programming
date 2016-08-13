// Btree implementation using recursion and searching elements

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* left;
	struct node* right;
};



struct node* GetnewNode(int x)
{
	struct node* newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=x;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}
struct node* Insert(struct node* root,int data)
{	
	if(root==NULL)
	{
		root=GetnewNode(data);
	}
	else if(data <= root->data)
	{
		root->left=Insert(root->left,data);
	}
	else
	{
		root->right=Insert(root->right,data);
	}
	return root;
}
int Search(struct node* root,int data)
{	int x=0;
	if(root==NULL) return x;
	if (root->data==data) return x+1;
	if(data <= root->data) return Search(root->left,data);
	else return Search(root->right,data);
}
int main()
{	struct node* root=NULL;
	printf("How many nodes you want in tree:\n");
	int nodes,i,data;
	scanf("%d",&nodes);
	for(i=0;i<nodes;i++)
	{
		printf("Enter the value\n");
		scanf("%d",&data);
		root=Insert(root,data);
	}
	int element,found;
	printf("Enter the element you want to search\n");
	scanf("%d",&element);
	found=Search(root,element);
	if(found==0) printf("Not found\n");
	else if(found==1) printf("Found\n");
}