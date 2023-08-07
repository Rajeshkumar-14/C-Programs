#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter Array Size : ");
    scanf("%d",&n);

    int a[n],i,j;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int min=0,max=0;

    for(i=0;i<n-1;i++)
    {
        min=min+a[i];
    }
    for(i=1;i<n;i++)
    {
        max=max+a[i];
    }
    printf("%d %d",min,max);
}
