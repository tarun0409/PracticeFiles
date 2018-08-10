#include<stdio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node * next;
};
struct node * head = NULL;
struct node * tail = NULL;
struct node* createNode(int val)
{
	struct node * newNode = (struct node*)malloc(sizeof(struct node));
	newNode->value = val;
	newNode->next = NULL;
	return newNode;
}
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
void queueTrace()
{
	printf("\n");
	struct node * tempNode = head;
	while(tempNode!=NULL)
	{
		printf("%d\t",tempNode->value);
		tempNode = tempNode->next;	
	}
}
int main()
{
	enqueue(createNode(6));
	queueTrace();
	enqueue(createNode(2));
	queueTrace();
	enqueue(createNode(4));
	queueTrace();
	enqueue(createNode(3));
	queueTrace();
	dequeue();
	queueTrace();
	dequeue();
	queueTrace();
	dequeue();
	queueTrace();
	dequeue();
	queueTrace();
	dequeue();
	queueTrace();
	return 0;
}
