#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node* left;
	struct node* right;
};

struct node* GetNewNode(int x)
{
	struct node* newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=x;
	newNode->left=NULL;
	newNode->right=NULL;
}
struct node* root=NULL;
struct node* Insert(struct node* root, int data)
{
	if (root==NULL)
	{
		struct node* newNode=GetNewNode(data);
		root=newNode;
	}
	else if (data <= root->data)
	{
		root->left=Insert(root->left,data);
	}
	else
	{
		root->right=Insert(root->right,data);
	}
	return root;
}

int IsSubtreeLesser(struct node* root, int value)
{
	if (root==NULL) return 1;
	if(root->data <= value && IsSubtreeLesser(root->left,value) && IsSubtreeLesser(root->right,value)) return 1;
	else return -1;
}
int IsSubtreeGreater(struct node* root, int value)
{
	if(root==NULL) return 1;
	if(root->data >value && IsSubtreeGreater(root->left,value) && IsSubtreeGreater(root->right,value)) return 1;
	else return -1;
}
int IsBinarySearchTree(struct node* root)
{
	if (root==NULL) return 1;
	if( IsSubtreeGreater(root->right,root->data) && IsSubtreeLesser(root->left,root->data) && IsBinarySearchTree(root->left) && IsBinarySearchTree(root->right)) return 1;
	else return -1;
}
int main()
{
	
	printf("Enter number of nodes in tree:\n");
	int n,data,i;
	scanf("%d",&n);
	printf("Enter the node values: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		root=Insert(root,data);
	}

	int result;
	result=IsBinarySearchTree(root);
	if(result==1) printf("Is binary tree\n");
	else printf("Is not a binary tree\n");
}