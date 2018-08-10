#include<stdio.h>
#include<stdlib.h>
struct treeNode
{
	int value;
	struct node ** children;
};
struct node * root = NULL;
struct node * createTreeNode(int val)
{
	struct node * newNode = (struct node *)malloc(sizeof(struct node));
	newNode->value = val;
	newNode->children = (struct node **)malloc(5*sizeof(struct node *));
	return newNode;
}
int traverseAndAddNode(struct node* tempRoot, struct node * newNode)
{
	if(tempRoot==NULL)
	{
		return 0;
	}
	int nodeAdded = 0;
	for(int i=0; i<5; i++)
	{
		if(tempRoot->children[i]==NULL)
		{
			nodeAdded = 1;
			tempRoot->children[i] = newNode;
			break;
		}
	}
	if(!nodeAdded)
	{
		for(int i=0; i<5; i++)
		{
			nodeAdded = traverseAndAddNode(tempRoot->children[i],newNode);
			if(nodeAdded)
			{
				break;
			}
		}	
	}
	return nodeAdded;
}
void addTreeNode(struct node * newNode)
{
	if(root==NULL)
	{
		root = newNode;
		printf("\nNode added");
		return;	
	}
	struct node * tempRoot = root;
	int nodeAdded = traverseAndAddNode(tempRoot,newNode);
	printf(nodeAdded?"\nNode added":"\nNode not added");		
}
int main()
{
	addNode(createNode(1));
	addNode(createNode(2));
	addNode(createNode(3));
	addNode(createNode(4));
	addNode(createNode(5));
	addNode(createNode(6));
	addNode(createNode(7));
	addNode(createNode(8));
	addNode(createNode(9));

	return 0;
}
