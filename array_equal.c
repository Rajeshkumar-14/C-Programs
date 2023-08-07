#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n],b[n];
    int i,j;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

     for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            if(b[i]>b[j])
            {
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    int cnt=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            cnt++;
        }
    }
    if(cnt==n)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }


}
