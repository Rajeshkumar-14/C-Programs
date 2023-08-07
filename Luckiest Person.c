#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*newnode,*head,*tail,*temp,*temp1;
int main()
{
    int size; scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=i+1;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
    }
    tail->next=head;
    temp=head; int count=1;
    while(temp->next!=temp)
    {
        temp->next=temp->next->next;
        temp=temp->next;
    }
    printf("%d ",temp->data);
}
