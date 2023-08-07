#include<stdio.h>
#include<stdlib.h>
#define max 100
int a[max],n,i,j,top=-1;

void push();
void pop();
void peek();
void display();

void main()
{
    int option;
    while(1)
    {
        printf("\n****STACK****\n");
        printf("Enter Your Choice : \n 1.PUSH \n 2.POP \n 3.PEEK \n 4.DISPLAY \n 5.Reverse\n");
        printf("Enter your option : ");
        scanf("%d",&option);

        switch(option)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            rev();
            break;
        default:
            printf("Enter Valid Option.\n");
            break;
        }
    }
}
void push()
{
    printf("Enter Length of Stack : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        top++;
        scanf("%d",&a[top]);

    }
}
void peek()
{
    printf("%d",top);
}
void pop()
{
    top--;
    n--;
}
void display()
{
    int tt=top;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[tt]);
        tt--;
    }
}
void rev()
{
    for(i=0;i<=top;i++)
    {
        printf("%d ",a[i]);
    }
}
