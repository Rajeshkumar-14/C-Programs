#include<stdio.h>
#include<string.h>
void main()
{
    char a[10];
    printf("Enter String : ");
    scanf("%s",a);
    printf("Is it Possible ? : ");
    int t=0,u=0,v=0;
    int n=strlen(a);
    for(int i=0;i<n;i++)
    {
        if(a[i]=='x')
        {
            t++;
        }
        else if(a[i]=='y')
        {
            u++;
        }
        else if(a[i]=='z')
        {
            v++;
        }
    }
    if(t==u)
    {
        v=v-1;
    }
    else if(t==v)
    {
        u=u-1;
    }
    else if(u==v)
    {
        t=t-1;
    }
    if(t==u && t==v)
    {
        printf("Yes\n");
    }
    else if(t==0 || u==0 || v==0 )
    {
        if((t==u)||(t==v)||(u==v))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else
    {
        printf("No\n");
    }
}
