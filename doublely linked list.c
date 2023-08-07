#include<stdio.h>
#include<stdlib.h>

void create();
void display();
void insert_begin();
void insert_mid();
void insert_end();
void delete_begin();
void delete_mid();
void delete_end();
void count();
void search();

struct node
{
    int data;
    struct node *next,*prev;
}*head=NULL,*temp,*newnode,*nextnode,*tail,*cnt=0;

void main()
{
    int option;
    while(1)
    {
        printf("\n****DOUBLE LINKED LIST****\n");
        printf("Enter Your Choice : \n 1. CREATE \n 2.DISPLAY \n 3.INSERT AT BEGINNING \n 4.INSERT AT MIDDLE \n 5.INSERT AT END \n 6.DELETE AT BEGINNING \n 7.DELETE AT MIDDLE \n 8.DELETE AT END \n 9.COUNT THE VALUE \n 10.SEARCH \n 11.EXIT \n");
        printf("Enter your option : ");
        scanf("%d",&option);

        switch(option)
        {
        case 1:
        {
            create();
            break;
        }
        case 2:
        {
            display();
            break;
        }
        case 3:
        {
            insert_begin();
            break;
        }
        case 4:
        {
            insert_mid();
            break;
        }
        case 5:
        {
            insert_end();
            break;
        }
        case 6:
            {
                delete_begin();
                break;
            }
        case 7:
            {
                delete_mid();
                break;
            }
        case 8:
            {
                delete_end();
                break;
            }
        /*case 9:
            {
                count();
                break;
            }
        case 10:
            {
                search();
                break;
            }*/
        case 11:
        {
            exit(0);
            break;
        }
        default :
        {
            printf("Enter a VALID OPTION \n");
        }

        }
    }
}

void create()
{
    int choice=1;

    while(choice!=0)
    {
        {
            newnode = (struct node*)(malloc(sizeof(struct node)));

            printf("Enter Data : ");
            scanf("%d",&newnode->data);
            newnode->next=NULL;

            if(head==NULL)
            {
                head=newnode;
                temp=newnode;
                tail=newnode;
            }
            else
            {
                temp->next=newnode;
                newnode->prev=temp;
                temp=newnode;
                tail=newnode;
            }
            printf("Do you need to add MORE ? : ( 1 ) for More ; ( 0 ) to EXIT  : ");
            scanf("%d",&choice);
            cnt++;
        }
    }
}

void display()
{
    temp=head;

    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void insert_begin()
{
    newnode = (struct node*)(malloc(sizeof(struct node)));

    printf("Enter the data to be added at BEGINNING :");
    scanf("%d",&newnode->data);

    newnode->next = head;
    head->prev = newnode;
    newnode->prev = NULL;
    head = newnode;
}

void insert_end()
{
    newnode = (struct node*)(malloc(sizeof(struct node)));

    printf("Enter the data to be added at END :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    head=temp;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void insert_mid()
{
    int pos;
    printf("Enter Position to be ADDED : ");
    scanf("%d",&pos);

    newnode = (struct node*)(malloc(sizeof(struct node)));

    printf("Enter the Element to be ADDED :");
    scanf("%d",&newnode->data);

    temp=head;
    for(int i=1; i<pos; i++)
    {
        temp=temp->next;
    }
    temp->prev->next = newnode;
    newnode->prev = temp->prev;
    newnode->next=temp;
    temp->prev=newnode;

}

void delete_begin()
{
    temp=head->next;
    head=temp;
    head->prev=NULL;
}

void delete_end()
{
    temp=tail->prev;
    tail=temp;
    tail->next=NULL;
    temp->next=NULL;
}

void delete_mid()
{
    int pos;
    printf("Enter the Position to be deleted : ");
    scanf("%d",&pos);
    temp=head;
    for(int i=1;i<pos;i++)
    {
        temp=temp->next;
    }

    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
}
