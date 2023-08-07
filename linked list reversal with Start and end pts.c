#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next,*prev;
}*newnode,*head,*temp,*temp1,*h1,*t1,*h2,*t2,*h3,*t3;
int cnt=1;

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
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("0 to exit 1 to add : ");
        scanf("%d",&choice);
    }
    int start,end;
    printf("Enter Starting position : ");
    scanf("%d",&start);
    printf("Enter Ending position : ");
    scanf("%d",&end);

    temp=head;
    temp1=head;
    while(temp!=NULL)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=temp->data;
        newnode->next=NULL;

        if(cnt>=start && cnt<=end)
        {
            if(h2==NULL)
            {
                h2=newnode;
                t2=newnode;
            }
            else
            {
                newnode->next=h2;
                h2=newnode;
            }
        }
        else if(cnt<start)
        {
            if(h1==NULL)
            {
                h1=newnode;
                t1=newnode;
            }
            else
            {
                t1->next=newnode;
                t1=newnode;
            }
        }
        else if(cnt>end)
        {
            if(h3==NULL)
            {
                h3=newnode;
                t3=newnode;
            }
            else
            {
                t3->next=newnode;
                t3=newnode;
            }
            if(cnt==end+1)
            {
                t1->next=h3;
            }
        }
        cnt++;
        temp=temp->next;
    }

    t1->next=h2;
    t2->next=h3;
    temp=h1;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
