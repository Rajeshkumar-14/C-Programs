#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head=NULL,*temp=NULL,*newnode=NULL;

void del_begin();
void display();

int main()
{
    int choice = 1;

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
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }

        printf("( 1 to Add More elements ) ( 0 to Exit )");
        scanf("%d",&choice);
    }

    del_begin();
    display();
    return 0;
}

void del_begin()
{
    if(head==NULL)
    {
        printf("List is Empty\n");
        return;
    }
    temp=head;
    head=temp->next;
    free(temp);
}

void display()
{
    if(head==NULL)
    {
        printf("List is Empty\n");
        return;
    }
    temp=head;

    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
