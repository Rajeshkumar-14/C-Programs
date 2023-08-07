#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char S[1000];
        scanf("%s", S);
        int len = 0;
        while (S[len] != '\0') len++;
        int left = 0, right = 0, star = 0;

        for (int i = 0; i < len; i++)
        {
            if (S[i] == '(')
            {
                left++;
            }
            else if (S[i] == ')')
            {
                right++;
            }
            else
            {
                star++;
            }

            if (right > left + star)
            {
                printf("No\n");
                goto end;
            }
        }
        left = right = 0;
        for (int i = len-1; i >= 0; i--)
        {
            if (S[i] == ')')
            {
                right++;
            }
            else if (S[i] == '(')
            {
                left++;
            }
            else
            {
                star++;
            }
            if (left > right + star)
            {
                printf("No\n");
                goto end;
            }
        }
        printf("Yes\n");
        end:
            continue;
    }
    return 0;
}
