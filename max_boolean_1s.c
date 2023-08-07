#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter Row Size : ");

    scanf("%d",&m);

    printf("Enter Column Size : ");

    scanf("%d",&n);

    int a[m][n];
    int b[m];

    int i,j,count;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        count=0;
        for(j=0; j<n; j++)
        {
            if(a[i][j]==1)
            {
                count++;
            }
            b[i]=count;
        }
    }
    int pos=0;
    int max=b[0];
    for(i=0; i<n; i++)
    {
        if(b[i]>max)
        {
            max=b[i];
            pos=i;
        }
    }
    printf("%d ",pos);

}
