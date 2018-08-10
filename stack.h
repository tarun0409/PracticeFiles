struct node * top = NULL;
void push(struct node* newNode)
{
	if(top == NULL)
	{
		top = newNode;
	}
	else
	{
		newNode->next = top;
		top = newNode;
	}
}
struct node* pop()
{
	if(top==NULL)
	{
		return NULL;
	}
	struct node* tempNode = top;
	top = top->next;
	return tempNode;
}
int isStackEmpty()
{
	if(top==NULL)
	{
		return 1;
	}
	return 0;
}
