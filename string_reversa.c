#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data[100];
    struct node* next;
}*top=NULL,*temp;

void main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        struct node* newnode=(struct node*)(malloc(sizeof(struct node)));
        newnode->next=NULL;
        scanf("%s",newnode->data);
        if(top==NULL)
        {
            top=newnode;
            temp=newnode;
        }
        else
        {
            newnode->next=temp;
            temp=newnode;
            top=newnode;
        }
    }
    temp=top;
    while(temp!=NULL)
    {
        printf("%s ",temp->data);
        temp=temp->next;
    }
}
