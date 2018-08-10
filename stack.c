#include<stdio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node * next;
};
struct node * top = NULL;
struct node* createNode(int val)
{
	struct node * newNode = (struct node*)malloc(sizeof(struct node));
	newNode->value = val;
	newNode->next = NULL;
	return newNode;
}
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
void recurseAndPrintStack(struct node * tempTop)
{
	if(tempTop==NULL)
	{
		return;
	}
	recurseAndPrintStack(tempTop->next);
	printf("%d\t",tempTop->value);
}
void printStackTrace()
{	
	struct node * tempTop = top;
	recurseAndPrintStack(tempTop);
	printf("\n\n");
}
int main()
{
	push(createNode(4));
	printStackTrace();
	push(createNode(3));
	printStackTrace();
	push(createNode(6));
	printStackTrace();
	pop();
	printStackTrace();
	pop();
	printStackTrace();
	pop();
	return 0;
}
