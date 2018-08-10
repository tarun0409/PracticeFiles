#include<stdio.h>
#include<stdlib.h>
#include "node.h"
#include "stack.h"
#include "tree.h"
void dfsTraverse(struct treeNode * tempRoot)
{
	if(tempRoot==NULL)
	{
		return;
	}
	if(!(tempRoot->visited))
	{
		printf("%d\t",tempRoot->value);
		for(int i=0; i<5; i++)
		{
			if(tempRoot->children[i]==NULL)
			{
				break;
			}
			dfsTraverse(tempRoot->children[i]);
		}
	}
	
}
int main()
{
	addTreeNode(createTreeNode(4));
	addTreeNode(createTreeNode(2));
	addTreeNode(createTreeNode(9));
	addTreeNode(createTreeNode(7));
	addTreeNode(createTreeNode(10));
	addTreeNode(createTreeNode(8));
	addTreeNode(createTreeNode(6));
	addTreeNode(createTreeNode(5));
	dfsTraverse(root);
	return 0;
}
