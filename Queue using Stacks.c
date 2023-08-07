#include<stdio.h>
#define max 100

int a[max],b[max],n,i,j,top=-1,top1=-1,queue[max],qtop=-1;

int main()
{
    printf("Enter Stack size : ");
    scanf("%d",&n);

    printf("Enter 1st Stack Elements : ");
    for(i=0;i<n;i++)
    {
        top++;
        scanf("%d",&a[top]);
    }

    printf("Enter 2nd Stack Elements : ");
    for(i=0;i<n;i++)
    {
        top1++;
        scanf("%d",&b[top1]);
    }

    printf("First Stack : \n");
    int temp=top;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[temp]);
        temp--;
    }
    printf("\nSecond Stack : \n");
    temp=top1;
    for(i=0;i<n;i++)
    {
        printf("%d ",b[temp]);
        temp--;
    }

    for(i=n-1;i>=0;i--)
    {
        qtop++;
        queue[qtop]=a[top];
        top--;
    }
    for(i=n-1;i>=0;i--)
    {
        qtop++;
        queue[qtop]=b[top1];
        top1--;
    }
    printf("\nThe Queue is : \n");

    for(i=0;i<n*2;i++)
    {

        printf("%d ",queue[qtop]);
        qtop--;
    }


}
