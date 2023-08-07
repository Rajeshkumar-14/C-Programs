#include <stdio.h>

int main()
{

    int n;
    printf("Enter your matrix n : ");
    scanf("%d",&n);

    int i,j,s;

    for (i=0;i<n;i++)
    {
        for (s=1;s<n-i;s++)
        {
            printf(" ");
        }
        for (j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
