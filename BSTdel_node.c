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

struct node* Insert(struct node* root,int value)
{
	if(root==NULL)
	{
		struct node* newNode=GetNewNode(value);
		root=newNode;
	}
	else if(value>root->data)
	{
		root->right=Insert(root->right,value);
	}
	else if(value <= root->data)
	{
		root->left=Insert(root->left,value);
	}
	return root;
}

struct node* FindMin(struct node* temp)
{
	int min=99999;
	struct node* temp2=NULL;
	while(temp->right!=NULL)
	{
		if(temp->data<min)
		{
			min=temp->data;
			temp2->data=min;
			temp2->left=temp->left;
			temp2->right=temp->right;
		}
		temp=temp->right;
	}
	return temp2;
} 

struct node* Delete(struct node* root,int data)
{
	if (root==NULL) return;
	else if(data <= root->data) root->left=Delete(root->left,data);
	else if (data > root->data) root->right-Delete(root->right,data);
	else
	{
		if(root->left==NULL && root->right==NULL)
		{
			free(root);
			root=NULL;
		}
		else if(root->left==NULL)
		{
			struct node* temp=root;
			root=root->right;
			free(temp);
		}
		else if(root->right==NULL)
		{
			struct node* temp=root;
			root=root->left;
			free(temp);
		}
		else
		{
			struct node* temp=FindMin(root->right);
			root->data=temp->data;
			root->right=Delete(root->right,temp->data);
		}
	}	
	return root;
}

int main()
{
	struct node* root=NULL;
	int n,i,data;
	printf("Enter the number of nodes for tree:\n");
	scanf("%d",&n);
	printf("Enter the values:\n");
	for(i=0;i<n;i++)
	{	
		scanf("%d",&data);
		root=Insert(root,data);
	}
	printf("Enter the value to Delete\n");
	int del;
	scanf("%d",&del);
	Delete(root,del);
}