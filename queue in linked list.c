#include<stdio.h>

void enqueue();
void dequeue();

struct node
{
    int data;
    struct node *next;
}*newnode,*temp,*front,*rear;

void main()
{
    int option;

    while(1)
    {
        printf("\n***QUEUE USING LINKED LIST***\n");
        printf(" 1.ENQUEUE \n 2.DEQUEUE \n 3.DISPLAY \n");

        printf("Enter Option : ");
        scanf("%d",&option);

        switch(option)
        {
            case 1: enqueue();break;
            case 2: dequeue();break;
            case 3: display(); break;
            case 4: exit(0);
        }

    }
}
void enqueue()
{
    int choice = 1;

    while(choice!=0)
    {
        newnode = (struct node*)(malloc(sizeof(struct node)));

        printf("Enter Data :");

        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(front==NULL)
        {
            front=newnode;
            rear=newnode;
        }
        else
        {
            rear->next=newnode;
            rear=newnode;
        }
        printf("Enter Your Choice : ");
        scanf("%d",&choice);
    }

}
void dequeue()
{
    temp=front;
    front=temp->next;
    free(temp);

}
void display()
{
    temp=front;


    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
