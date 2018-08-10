void bfsTraverse()
{
	struct treeNode * tempRoot = root;
	enqueue(createNode(tempRoot));
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
