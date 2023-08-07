#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];

    printf("Enter your String : ");
    scanf("%[^\n]%c",s);

    int len=strlen(s);
    int cnt = 0,i;
    char space=' ';

    for (i=len-1;i>=0;i--)
    {
        if (s[i]==space)
        {
            if (cnt>0)
            {
                break;
            }
        }
        else
        {
            cnt++;
        }
    }
    printf("The length of the last word is %d ",cnt);
}
