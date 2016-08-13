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
{	
	int x=0;
	if(root==NULL) return x;
	if (root->data==data) return x+1;
	if(data <= root->data) return Search(root->left,data);
	else return Search(root->right,data);
}

int FindMin(struct node* root)
{	if (root==NULL) 
	{
		printf("Tree is Empty\n");
		return;
	}
	while(root->left!=NULL)
	{
		root=root->left;
	}
	return root->data;
}

int FindMax(struct node* root)
{	if (root==NULL) 
	{
		printf("Tree is Empty\n");
		return;
	}
	while(root->right!=NULL)
	{
		root=root->right;
	}
	return root->data;
}

int FindHeight(struct node* root)
{
	if (root==NULL) return -1;
	int left_height,right_height;
	left_height=FindHeight(root->left);
	right_height=FindHeight(root->right);
	if(left_height>right_height)
	{
		return left_height+1;
	}
	else
	{
		return right_height+1;
	}
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
	int min=FindMin(root);
	printf("min is %d\n",min);
	int max=FindMax(root);
	printf("max is %d\n",max);
	int Height=FindHeight(root);
	printf("Heigth of tree is %d\n",Height);

}