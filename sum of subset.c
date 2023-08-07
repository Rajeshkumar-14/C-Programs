#include<stdio.h>
#include<stdlib.h>


int main()
{
    int T;
    scanf("%d",&T);

    while(T--)
    {
        int n,k;
        scanf("%d",&n);

        int a[n],sum=0;;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        printf("%d",sum);
        printf("Enter K : ");
        scanf("%d",&k);

        if(sum%k==0)
        {
            printf("True\n");
        }
        else
        {
            printf("False\n");
        }
    }
}
