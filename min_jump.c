#include<stdio.h>

int main()
{
    int n;
    printf("Enter Array Size :");
    scanf("%d",&n);

    int a[n];
    int i=0,j,cnt=0;

    printf("Enter Elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i+=a[i])
    {
        if(a[i]=='\0')
        {
            break;
        }
        else
        {
            cnt++;
        }

    }
    printf("%d",cnt);
}
