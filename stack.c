#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peek();
void display();

struct node
{
    int data;
    struct node *next;
}*newnode,*top,*temp;

void main()
{
    int option;
    while(1)
    {
        printf("\n****STACK****\n");
        printf("Enter Your Choice : \n 1.PUSH \n 2.POP \n 3.PEEK \n 4.DISPLAY\n");
        printf("Enter your option : ");
        scanf("%d",&option);

        switch(option)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("Enter Valid Option.\n");
            break;
        }
    }
}
void push()
{
    int choice=1;

    while(choice!=0)
    {
        newnode = (struct node*)(malloc(sizeof(struct node)));

        printf("Enter Data : ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(top==NULL)
        {
            top=newnode;
            top->next=NULL;
        }
        else
        {
            newnode->next=top;
            top=newnode;
        }
        printf("Enter Choice 0 or 1 : ");
        scanf("%d",&choice);
    }
}
void pop()
{

    top=top->next;
}

void peek()
{
    printf("%d",top->data);
}
void display()
{
    temp=top;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

