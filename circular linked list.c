#include<stdio.h>
#include<stdlib.h>

void create();
void display();
void insert_begin();

void insert_end();
void delete_begin();
void delete_end();

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*temp=NULL,*newnode=NULL,*tail=NULL;

void main()
{
    int option;
    while(1)
    {
        printf("\n****CIRCULAR LINKED LIST****\n");
        printf("Enter Your Choice : \n 1. CREATE \n 2.DISPLAY \n 3.INSERT AT BEGINNING \n 4.INSERT AT MIDDLE \n 5.INSERT AT END \n 6.DELETE AT BEGINNING \n 7.DELETE AT END 8.EXIT \n");
        printf("Enter your option : ");
        scanf("%d",&option);

        switch(option)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert_begin();
            break;
        case 4:
            insert_mid();
            break;
        case 5:
            insert_end();
            break;
        case 6:
            delete_begin();
            break;
        case 7:
            delete_end();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Enter Valid Option...\n");
        }
    }
}

void create()
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
            temp=newnode;
            tail=newnode;
        }
        else
        {
            temp->next=newnode;
            tail=newnode;h
            temp=newnode;
            tail->next=head;
        }
        printf("Enter Choice 0 or 1 : ");
        scanf("%d",&choice);
    }

}
void display()
{
    temp=head;

    while(temp!=tail)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    printf("\n");
}
void insert_begin()
{
    newnode = (struct node*)(malloc(sizeof(struct node)));

    printf("Enter data : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    temp=head;
    newnode->next=temp;
    head=newnode;
    head->prev=tail;

}
void insert_end()
{
    newnode = (struct node*)(malloc(sizeof(struct node)));

    printf("Enter data : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    temp=tail;
    temp->next=newnode;
    tail=newnode;
}
void delete_begin()
{
    temp=head;
    temp=head->next;
    head=temp;
}
void delete_end()
{

    temp=head;
    while(temp!=tail)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next=head;
    tail=prev;
    free(temp);
}
