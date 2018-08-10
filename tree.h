struct treeNode
{
	int value;
	int visited;
	struct treeNode ** children;
};
struct treeNode * root = NULL;
struct treeNode * createTreeNode(int val)
{
	struct treeNode * newNode = (struct treeNode *)malloc(sizeof(struct treeNode));
	newNode->value = val;
	newNode->visited = 0;
	newNode->children = (struct treeNode **)malloc(5*sizeof(struct treeNode *));
	return newNode;
}
int traverseAndAddNode(struct treeNode* tempRoot, struct treeNode * newNode)
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
void addTreeNode(struct treeNode * newNode)
{
	if(root==NULL)
	{
		root = newNode;
		return;	
	}
	struct treeNode * tempRoot = root;
	int nodeAdded = traverseAndAddNode(tempRoot,newNode);		
}
