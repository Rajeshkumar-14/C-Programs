#include<stdio.h>
#define max 100
int a[max],n,i,j,front=-1;
void enqueue();
void dequeue();
void display();

void main()
{
    int option;

    while(1)
    {
        printf("\n***QUEUE USING LINKED LIST***\n");
        printf(" 1.ENQUEUE \n 2.DEQUEUE \n 3.DISPLAY \n");

        printf("Enter Option : ");
        scanf("%d",&option);

        switch(option)
        {
            case 1: enqueue();break;
            case 2: dequeue();break;
            case 3: display(); break;
            case 4: exit(0);
        }

    }
}

void enqueue()
{
    printf("Enter Array of Queue : ");

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        front++;
        scanf("%d",&a[front]);
    }

}
void dequeue()
{
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
}
void display()
{
    for(i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }
}
