#include<stdio.h>
int a[100],n,top=-1;
void main()
{
    printf("Enter the size of stack: ");
    scanf("%d",&n);
    int choice=1;
    while(choice)
    {
        int b;
        printf("1. Push \n 2. Pop \nEnter your choice: ");
        scanf("%d",&b);
        switch(b)
        {
            case 1:push();break;

        }
        printf("Enter ur wish(0,1): ");
        scanf("%d",&choice);
    }
    rev();
    display();
}
void push()
{
    if(top<n-1)
    {
        top=top+1;
        printf("Enter the data: ");
        scanf("%d",&a[top]);
    }
    else
    {
        printf("The stack is full :) ");
    }
}
void rev()
{
    int c=top/2;
    for(int i=0;i<c+1;i++)
    {
        int temp=a[i];
        a[i]=a[top-i];
        a[top-i]=temp;
    }
}
void display()
{
    printf("Reversed stack is ");
    if(top>=0)
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d ",a[i]);
        }
    }
    else
    {
        printf("The stack is empty :) ");
    }
    printf("\n");
}
