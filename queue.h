struct node * head = NULL;
struct node * tail = NULL;
void enqueue(struct node* newNode)
{
	if(head==NULL)
	{
		head = newNode;
		tail = newNode;
		return;
	}
	tail->next = newNode;
	tail = tail->next;
}
struct node * dequeue()
{
	if(head==NULL)
	{
		return head;
	}
	struct node * tempNode = head;
	head = head->next;
	return tempNode;
}
int isQueueEmpty()
{
	if(head==NULL)
	{
		return 1;
	}
	return 0;
}
