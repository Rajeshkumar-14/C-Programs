#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int a[n],b[m];
    int i,j;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int x;
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]+b[j]==x)
            {
                printf("%d %d\n",a[i],b[j]);
            }
        }
    }
}
