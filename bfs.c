#include<stdio.h>
#include<stdlib.h>
#include "node.h"
#include "queue.h"
#include "tree.h"

void bfsTraverse()
{
	enqueue(createNode(root));
	while(!isQueueEmpty())
	{
		struct node * tempNode = dequeue();
		struct treeNode * currentTreeNode = tempNode->t_node;
		if(!(currentTreeNode->visited))
		{
			printf("%d\t",currentTreeNode->value);
			for(int i=0; i<5; i++)
			{
				if((currentTreeNode->children[i])==NULL)
				{
					break;
				}
				struct treeNode * nextTreeNode = currentTreeNode->children[i];
				enqueue(createNode(nextTreeNode));
			}
		}
		currentTreeNode->visited = 1;
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
	bfsTraverse();
	return 0;
}
