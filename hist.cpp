#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node
{
    int val;
    struct node * next;
};
struct node * top = NULL;
struct node * create_node(int value)
{
    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    new_node->val = value;
    new_node->next = NULL;
    return new_node;
}

void push(struct node * new_node)
{
    if(top==NULL)
    {
        top = new_node;
        return;
    }
    new_node->next = top;
    top = new_node;
}

struct node * pop()
{
    struct node * temp_node = top;
    if(top!=NULL)
    {
        top = top->next;
    }
    return temp_node;
}

int peek()
{
    if(top==NULL)
    {
        return -1;
    }
    return top->val;
}

int isEmpty()
{
    if(top==NULL)
    {
        return 1;
    }
    return 0;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    ios_base::sync_with_stdio(false);
    int N;
    cin>>N;
    int i=0;
    int m_a = 0;
    int * bars = (int *)malloc(N*sizeof(int));
    for(int j=0; j<N; j++)
    {
        cin>>bars[j];
    }
    while(i<N)
    {
        if(isEmpty())
        {
	    struct node * temp = create_node(i);
            push(temp);
            i++;
        }
        else if(bars[peek()] <= bars[i])
        {
	    struct node * temp = create_node(i);
            push(temp);
            i++;
        }
        else
        {
            struct node * temp = pop();
            int t1 = temp->val;
            int a = bars[t1];
            if(isEmpty())
            {
                a*=i;
            }
            else
            {
                int t = i - peek();
                t--;
                a*=t;
            }
            if(m_a < a)
            {
                m_a = a;
            }
        }
    }
    while(!isEmpty())
    {
            struct node * temp = pop();
            int t1 = temp->val;
            int a = bars[t1];
            if(isEmpty())
            {
                a*=i;
            }
            else
            {
                int t = i - peek();
                t--;
                a*=t;
            }
            if(m_a < a)
            {
                m_a = a;
            }
    }
    cout<<m_a;
    
    return 0;
}

