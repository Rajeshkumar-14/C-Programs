#include<stdio.h>

int main()
{
    int n,i,ele;

    printf("Enter the Array size : ");
    scanf("%d",&n);

    int a[n];

    int sum=0,sum_n=0;

    printf("Enter the %d elements for the Array :\n",n);

    for(i=0; i<n-1; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    for(i=1; i<=n; i++)
    {
        sum_n=sum_n+i;
    }

    ele=sum_n-sum;
    printf("%d",ele);

}
