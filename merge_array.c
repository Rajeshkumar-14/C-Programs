#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter 1st array size : ");
    scanf("%d",&m);

    printf("Enter 2nd array size : ");
    scanf("%d",&n);

    int a[m],b[n];
    int x=m+n;
    int c[x];
    int i,j;

    printf("Enter elements for 1st array :\n");
    for(i=0; i<m; i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }

    printf("Enter elements for 2nd array :\n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
        c[m+i]=b[i];
    }

    //Sorting

    for(i=0; i<x; i++)
    {
        for(j=i+1; j<x; j++)
        {
            if(c[i]>c[j])
            {
                int t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
    }

    for(i=0; i<x; i++)
    {
        for(j=i+1; j<x; j++)
        {
            if(c[i]==c[j])
            {
                c[j]=0;
            }
        }
    }

    printf("The Final array is : \n");

    int count=0;

    for(i=0; i<x; i++)
    {
        if(c[i]!=0)
        {
            printf("%d ",c[i]);
        }
        else
        {
            count++;
        }
    }
    printf("\n The No of Repeated elements is : %d ",count);

}
