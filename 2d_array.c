#include<stdio.h>

int main()
{
    int x,y,m,n;

    printf("Enter no of column for 1st Matrix : ");
    scanf("%d",&x);
    printf("Enter no of row for 1st Matrix : ");
    scanf("%d",&y);

    printf("Enter no of column for 2nd Matrix : ");
    scanf("%d",&m);
    printf("Enter no of row for 2nd Matrix : ");
    scanf("%d",&n);

    if(x==m && y==n)
    {
        int a[x][y];
        int b[m][n];

        int i,j;

        printf("Enter Element for 1st Matrix :\n");

        for(i=0; i<x; i++)
        {
            for(j=0; j<y; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("Enter Element for 2nd Matrix :\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

        int c[x][y];

        printf("The SUM of the 2 matrices is :\n");

        for(i=0; i<x; i++)
        {
            for(j=0; j<y; j++)
            {
                c[i][j]=(a[i][j]+b[i][j]);
                printf(" %d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("This Addition cannot be PERFORMED...!");
    }
}
