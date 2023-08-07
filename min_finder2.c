#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*temp,*temp1,*temp2;
int main()
{
    int choice=1;
    while(choice)
    {
        struct node *new;
        new=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value:");
        scanf("%d",&new->data);
        new->next=NULL;
        if(head==NULL)
        {
            head=new;
            temp=new;
        }
        else
        {
            temp->next=new;
            temp=new;
        }
        printf("Enter the choice(0,1) ");
        scanf("%d",&choice);
    }
    head=head->next;
    temp=head;
    temp1=temp->next;

    int i=2;
    while(temp1->next!=NULL)
    {
       if(i%2!=0)
       {
          temp->next=temp1;
          temp=temp->next;
          temp1=temp1->next;
       }
       else
        {
        temp1=temp1->next;
       }
       i++;

    }
    if(1%2==0)
    {
        temp->next=NULL;
    }
    else{
        temp->next=temp1;
    }

    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

    return 0;
}
