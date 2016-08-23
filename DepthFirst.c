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
	return newNode;
}

struct node* Insert(struct node* root,int data)
{	
	if(root==NULL)
		{
			root=GetNewNode(data);
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

void Inorder(struct node* root)
{
	if(root==NULL) return;
	Inorder(root->left);
	printf("%d\t",root->data);
	Inorder(root->right);
}

void Preorder(struct node* root)
{
	if(root==NULL) return;
	printf("%d\t",root->data);
	Preorder(root->left);
	Preorder(root->right);
}

void Postorder(struct node* root)
{
	if(root==NULL) return;
	Postorder(root->left);
	Postorder(root->right);
	printf("%d\t",root->data);
}

int main()
{
	struct node* root=NULL;
	printf("Enter the number of Elements to insert:\n");
	int n,i;
	int data;
	scanf("%d",&n);
	printf("Enter the number\n");
	for(i=0;i<n;i++)
	{	
		scanf("%d",&data);
		root=Insert(root,data);
	}
	printf("\n");
	printf("Inorder :\n");
	Inorder(root);

	printf("\n");
	printf("Preorder :\n");
	Preorder(root);

	printf("\n");
	printf("Postorder :\n");
	Postorder(root);

}