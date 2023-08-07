#include<stdio.h>
void main()
{
    int arr[]= {1,2,3,1,4,5,2,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    scanf("%d",&k);
    for(int i=0; i<=n-k; i++)
    {
        int max=arr[i];
        for(int j=i+1; j<i+k; j++)
        {
            if(max<=arr[j])
            {
                max=arr[j];
            }
        }
        printf("%d ",max);
    }
}
