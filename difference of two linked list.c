#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*head,*temp;
void main()
{
    int l1=0,l2=0;
    for(int i=0; i<2; i++)
    {
        if(i==0)
        {
            printf("Enter the data for 1st linked list:\n");
            int choice=1;
            while(choice)
            {
                struct node* newnode=(struct node*)(malloc(sizeof(struct node)));
                printf("Enter a data: ");
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
                l1=(l1*10)+newnode->data;
                printf("Enter the choice(0,1): ");
                scanf("%d",&choice);
            }
        }
        else
        {
            printf("Enter the data for 2nd linked list:\n");
            int choice=1;
            while(choice)
            {
                struct node* newnode1=(struct node*)(malloc(sizeof(struct node)));
                printf("Enter a data: ");
                scanf("%d",&newnode1->data);
                newnode1->next=NULL;
                if(head==NULL)
                {
                    head=newnode1;
                    temp=newnode1;
                }
                else
                {
                    temp->next=newnode1;
                    temp=newnode1;
                }
                l2=(l2*10)+newnode1->data;
                printf("Enter the choice(0,1): ");
                scanf("%d",&choice);
            }
        }
    }
    if(l1>l2)
    {
        printf("%d",l1-l2);
    }
    else
    {
        printf("%d",l2-l1);
    }
}
