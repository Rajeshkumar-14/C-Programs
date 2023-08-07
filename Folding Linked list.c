#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next,*prev;
}*newnode,*tail,*head,*temp,*temp1;

void main()
{
    int n,i;
    scanf("%d",&n);
    int mid;

    if(n%2==0)
    {
        mid=n/2;
    }
    else
    {
        mid=(n/2);
    }

    for(i=0; i<n; i++)
    {
        newnode = (struct node*)(malloc(sizeof(struct node)));

        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
            tail=newnode;
        }
    }
    temp=head;
    temp1=tail;

    for(i=0; i<mid; i++)
    {
        printf("%d ",temp->data);
        printf("%d ",temp1->data);
        temp=temp->next;
        temp1=temp1->prev;
    }
    if(n%2==1)
    {
        printf("%d ",temp->data);
    }
}



