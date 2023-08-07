#include<stdio.h>

int main()
{
    int curr[]={1,2,5,10,20,50,100,200,500,2000};
    int len=sizeof(curr)/sizeof(curr[0]);

    int n;
    scanf("%d",&n);
    int i;

    while(n!=0)
        {
            for(i=0;i<len;i++)
            {
                if(curr[i]==n)
                {
                    n=n-curr[i];
                    printf("%d ",curr[i]);
                    i=len;
                }
                else if(n<curr[i])
                {
                    n=n-curr[i-1];
                    printf("%d ",curr[i-1]);
                    i=len;
                }
            }
        }
}
