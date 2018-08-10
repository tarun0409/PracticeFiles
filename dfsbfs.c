#include<stdio.h>
#include<stdlib.h>
#include "node_headers.h"
#include "bfs.h"
#include "dfs.h"

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
