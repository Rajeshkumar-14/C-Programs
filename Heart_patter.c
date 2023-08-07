#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, n;
    char str[50] = "I LOVE RATHINAM";
    int len;

    printf("Enter no of rows: ");
    scanf("%d", &n);

    len = strlen(str);

    for (i = n/2; i <= n; i += 2)
    {
        for (j = 1; j < n-i; j += 2)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("*");

        for (j = 1; j <= n-i; j++)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    for (i = n; i >= 1; i--)
    {
        for (j = i; j < n; j++)
            printf(" ");

        if (i == n)
        {
            printf("*********%s",str);
            for (j = 1; j < (n*2-len)/2; j++)
                printf("*");
        }
        else
        {
            for (j = 1; j <= (i*2)-1; j++)
                printf("*");
        }

        printf("\n");
    }

    return 0;
}
