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
		tempRoot->visited = 1;
	}
	
}
