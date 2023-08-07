#include<stdio.h>

int main()
{
    int n;
    printf("Enter Array Size : ");
    scanf("%d",&n);

    int a[n],i;
    int count=0;

    printf("Enter Array elements :\n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int b;
    printf("Enter Element to be searched: ");
    scanf("%d",&b);

    for(i=0; i<n; i++)
    {
        if(a[i]==b)
        {
            count++;
        }
    }

    if(count==0)
    {
        printf("Element NOT FOUND...!");
    }
    else
    {
        printf("Element FOUND....!");
    }

}
