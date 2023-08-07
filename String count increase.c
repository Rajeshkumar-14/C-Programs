/* Input - a3b2c3
 output:aaabbccc
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    scanf("%s",a);
    int b[100];
    char c[100];

    int n=strlen(a);
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==1)
        {
            b[k++]=a[i];
            a[i]=' ';
        }
    }

    k=0;
    int d=0;
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<b[i];j++)
        {
            c[k++]+a[d];
        }
        d++;
    }

    for(int i=0;i<n;i++)
    {
        printf("%c",c[i]);
    }



}
