#include<stdio.h>

int main()
{
    int n;
    printf("Enter Size : ");
    scanf("%d",&n);

    int rowmin=1;
    int rowmax=n;
    int colmin=1;
    int colmax=n;

    int a[n][n],count=1,i,j;

    while(rowmin<=rowmax)
    {
        for(i=colmin; i<=colmax; i++)
        {
            a[rowmin][i]=count++;
        }

        for(i=rowmin+1; i<=rowmax; i++)
        {
            a[i][colmax]=count++;
        }

        for(i=colmax-1; i>=colmin; i--)
        {
            a[rowmax][i]=count++;
        }

        for(i=rowmax-1; i>rowmin; i--)
        {
            a[i][colmin]=count++;
        }

        rowmin++;
        colmin++;
        rowmax--;
        colmax--;
    }
    for(i = 1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%d",a[i][j]);
            printf(" ");
        }
        printf("\n");
    }

}
