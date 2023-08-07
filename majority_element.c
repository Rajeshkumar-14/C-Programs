#include<stdio.h>

int main()
{
    int n;
    printf("Enter Array Size : ");
    scanf("%d",&n);

    int a[n],i;
    int count=0, max_rep;

    printf("Enter Array elements :\n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(count==0)
        {
            max_rep = a[i];
            count = 1;
        }
        else if(a[i]==max_rep)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    printf("Majority Element : %d", max_rep);
}
