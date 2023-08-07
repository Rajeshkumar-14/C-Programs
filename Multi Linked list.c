#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head,*temp;

void insert_at_begin()
{
    struct node *newnode;

    newnode = (struct node*)(malloc(sizeof(struct node)));

    printf("Enter data to be added at Beginning : ");
    scanf("%d",&newnode->data);

    newnode->next=head;
    head=newnode;
}
void insert_at_last()
{
    struct node *newnode;

    newnode = (struct node*)(malloc(sizeof(struct node)));

    printf("Enter data to be added at Last : ");
    scanf("%d",&newnode->data);

    newnode->next=NULL;
    temp->next=newnode;

}
void display()
{
    temp=head;

    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
void main()
{
    int choice=1;

    while(choice)
    {

        struct node *newnode;

        newnode = (struct node*)(malloc(sizeof(struct node)));

        printf("Enter data : ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Enter your Choice(0,1) : ");
        scanf("%d",&choice);


    }
    insert_at_begin();
    insert_at_last();
    display();
}
