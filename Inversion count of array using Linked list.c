#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next,*prev;
}*head,*tail,*temp,*newnode,*temp1;

void main()
{
    int n;
    int count=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
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
    while(temp->next!=NULL)
    {
        temp1=temp->next;
        while(temp1!=NULL)
        {
            if(temp->data > temp1->data)
            {
                count++;
            }
            temp1=temp1->next;
        }
        temp=temp->next;
    }
    printf("%d",count);
}
