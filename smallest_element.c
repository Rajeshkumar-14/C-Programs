#include<stdio.h>
int n;
kthSmallest()
{
    scanf("%d",&n);
    int a[n],k,i,j;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&k);

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
        }
    }
    printf("%d",a[k-1]);

}

int main()
{
    kthSmallest();
}
