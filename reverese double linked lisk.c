#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next,*prev;
}*head,*tail,*temp,*newnode;

void main()
{
    int choice=1;

    while(choice!=0)
    {
        newnode = (struct node*)(malloc(sizeof(struct node)));

        printf("Enter Data : ");
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
            tail=newnode;
            temp=newnode;
        }
        printf("Do you need to add MORE ? : ( 1 ) for More ; ( 0 ) to EXIT  : ");
        scanf("%d",&choice);
    }

    display();
}

void display()
{
    temp=tail;

    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
}
