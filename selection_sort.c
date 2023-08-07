#include<stdio.h>

int main()
{
    int n,min,temp=0;
    printf("Enter Array Size : ");
    scanf("%d",&n);

    int a[n],i,j;

    printf("Enter ARRAY Elements :\n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }



    //Selection Sort

    for(i=0; i<n; i++)
    {
        min=i;

        for(j=i+1; j<n; j++)
        {
            if(a[min]>a[j])
            {
                min=j;

            }


        }
        if(i!=min)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;

        }


    }

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }



}
