#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, k;
        scanf("%d %d",&n,&k);

        int pow=1;
        for(int i=0;i<n;i++)
        {
            pow *= 2;
        }

        if(n>0 && (k+1)%pow==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
