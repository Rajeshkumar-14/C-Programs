#include<stdio.h>
struct node
{
    int data;
    struct node* next,*prev,*child;
}*head=NULL,*head1,*head2,*head3,*temp;

void display(struct node* head)
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

struct node* FlattenList(struct node* head)
{
    if(head==NULL)
    {
        return;
    }
    struct node* tail=head, *curr=head;
    while(curr)
    {
        struct node *child=curr->child;
        struct node *nextnode=curr->next;
        if(child)
        {
            struct node *tail_child=FlattenList(child);
            tail_child->next=nextnode;
            if(nextnode)
            {
                nextnode->prev=tail_child;
            }
            curr->next=child;
            child->prev=curr;
            curr->child=NULL;
            curr=tail;
        }
        else
        {
            curr=nextnode;
            if(curr)
            {
                tail=curr;
            }
        }
    }
    return tail;
}
struct node* create(int a[],int n)
{
    head=NULL;
    temp=NULL;
    for(int i=0; i<n; i++)
    {
        struct node* newnode=(struct node*)(malloc(sizeof(struct node)));
        newnode->next=NULL;
        newnode->prev=NULL;
        newnode->child=NULL;
        newnode->data=a[i];
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            newnode->prev=temp;
            temp->next=newnode;
            temp=newnode;
        }
    }
    return head;
}
int main()
{
    int a[]= {1,2,3,4,5,6};
    int b[]= {7,8,9,10};
    int c[]= {11,12};

    int s1= sizeof(a)/sizeof(a[0]);
    int s2= sizeof(b)/sizeof(b[0]);
    int s3= sizeof(c)/sizeof(c[0]);

    head1 = create(a,s1);
    head2 = create(b,s2);
    head3 = create(c,s3);

    head1->next->next->child=head2;
    head2->next->child=head3;

    FlattenList(head1);
    display(head1);
}
