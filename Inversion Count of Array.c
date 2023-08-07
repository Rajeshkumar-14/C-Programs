#include<stdio.h>
void main()
{
    int a[]={1,9,6,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(i<j && a[i]>a[j])
            {
                count++;
            }
        }
    }
    printf("%d",count);
}
