#include<stdio.h>
#include<math.h>

int main()
{
    int a=5,b=4,c=1;
    int i,k=2;

    for (i=0;i<b; i++)
    {
        c*=a;
    }

    int res=c%100;

    printf("%d",res);
}
