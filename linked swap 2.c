#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* head=NULL;
struct node* temp=NULL;

void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int m=n;
    while(n!=0)
    {
        struct node* newnode=(struct node*)(malloc(sizeof(struct node)));
        newnode->next=NULL;
        scanf("%d",&newnode->data);
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
        n--;
    }
    int k;
    scanf("%d",&k);

    int a1=0;
    int a2=0;
    int l=m-(k-2);
    int count=1;

    temp=head;
    while(temp!=NULL)
    {
        if(count==k)
        {
            a1=temp->data;
            count+=1;
        }
        if(count==l)
        {
            a2=temp->data;
            count+=1;
        }
        else
        {
            count+=1;
        }
        temp=temp->next;
    }
    temp=head;
    count=1;
    while(temp!=NULL)
    {
        if(count==k)
        {
            temp->data=a2;
            count+=1;
        }
        if(count==l)
        {
            temp->data=a1;
            count+=1;
        }
        else
        {
            count+=1;
        }
        temp=temp->next;
    }
    display();
    return 0;
}

