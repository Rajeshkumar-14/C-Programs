#include<stdio.h>

int main()
{
    int n,i,j,k=0,cnt=0;

    scanf("%d",&n);

    int b[n];

    for(i=1;i<=n;i++)
    {
        for(j=2;j<=n/2;j++)
        {
            if(i%j==0)
            {
                cnt=1;
            }
            if(cnt!=1)
            {
                b[k]=i;
                k++;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        int sum=sum+b[i];

        if(sum==n || sum>n)
        {
            break;

        }

        else if(sum!=n)
        {
            cnt++;
        }
        else
        {
            printf("NO possibilities");
        }


    }
    printf("%d",cnt);
}
