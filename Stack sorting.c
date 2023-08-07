#include<stdio.h>
void main()
{
    printf("Enter the size of the stack: ");
    int n;
    scanf("%d",&n);
    int top=-1;
    int a[n];
    for(int i=0; i<n; i++)
    {
        if(top>=n-1)
        {
            printf("The stack is full :) ");
        }
        else
        {
            top+=1;
            scanf("%d",&a[top]);
        }
    }
    for(int i=0;i<=top;i++)
    {
        for(int j=i+1;j<=top;j++)
        {
            if(a[i]>=a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=top;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
