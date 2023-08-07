#include <stdio.h>

int main()
{
    int n1,n2;
    printf("Enter Array Size in Columns and Rows : ");
    scanf("%d %d",&n1,&n2);

    int a[n1][n2],i,j;
    printf("Enter Array Elements : \n");
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //Rotation loop
    for(i=0;i<n1/2;i++)
    {
        for(j=i;j<n1-i-1;j++)
        {
            int temp = a[i][j];
            a[i][j] = a[n1-j-1][i];
            a[n1-j-1][i] = a[n1-i-1][n1-j-1];
            a[n1-i-1][n1-j-1] = a[j][n1-i-1];
            a[j][n1-i-1] = temp;
        }
    }
    printf("Rotated Matrix: \n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

