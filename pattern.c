#include<stdio.h>

int main()
{
    int n;
    printf("Enter your matrix size : ");
    scanf("%d",&n);

    int i,j;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
