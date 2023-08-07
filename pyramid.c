
#include <stdio.h>

int main()
{

    int n;
    printf("Enter your matrix n : ");
    scanf("%d",&n);

    int i,s,j;

    for (i=0;i<n;i++)
    {

        for (s=0;s<n-i-1;s++)
        {
            printf(" ");
        }
        for (j=0;j<2*i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

