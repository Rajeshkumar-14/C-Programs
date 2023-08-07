#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*top,*tail,*newnode,*temp;
int count=0;
void push();
void display();
void pop();
void peek();
void mid();

int main()
{
    int option;
    while(1)
    {
        printf("\n\n* STACK *\n\n");
        printf("1.push\n");
        printf("2.display\n");
        printf("3.Remove Mid\n");
        printf("Enter your choice (1,2,3): ");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            display();
            break;
        }

        case 3:
        {
            mid();
            break;
        }


        }
    }
    return 0;


}

void push()
{
    int choice=1;
    while(choice)
    {
        struct node * newnode;
        newnode= malloc(sizeof(struct node));
        printf("Enter the data :");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(top==NULL)
        {
            top= newnode;
        }
        else
        {
            newnode->next=top;
            top=newnode;
        }

        printf("Enter the choice 0 or 1 :");
        scanf("%d",&choice);
    }


}

void pop()
{
    temp=top;
    top=top->next;
    free(temp);

}

void display()
{
    temp=top;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n");
}

void mid()
{
    temp=top;
    if(temp!= NULL)
    {
        for(int i=0; i<(count/2)-1; i++)
        {
            temp=temp->next;
        }

    }
    temp->next=temp->next->next;
}
