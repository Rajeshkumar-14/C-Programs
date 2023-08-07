#include<stdio.h>

int main()
{
    int n;

    printf("Enter Size of array : ");
    scanf("%d",&n);

    int a[n];
    int b[n];

    int i,j,t;

    printf("Enter Elements for 1st array : \n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter Elements for 2nd array : \n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
    }

    //1st array sort

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    //2nd array sort

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(b[i]<b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }

    int count=0;

    for(i=0; i<n; i++)
    {

        if(a[i]==b[i])
        {
            count++;
        }
    }

    for(i=0;i<)

    if(count==n)
    {
        printf("The Arrays are EQUAL...");
    }
    else
    {
        printf("The Arrays are NOT EQUAL...");
    }

}
