struct node
{
	struct treeNode * t_node;
	struct node * next;
};
struct node * createNode(struct treeNode * tempNode)
{
	struct node * newNode = (struct node *)malloc(sizeof(struct node));
	newNode->t_node = tempNode;
	newNode->next = NULL;
	return newNode;
}
