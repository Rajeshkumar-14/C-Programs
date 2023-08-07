#include<stdio.h>

int main()
{
    int n;

    printf("Enter Array size :");
    scanf("%d",&n);

    int a[n];O
    int b=0;
    int c;

    int i,j;

    printf("Enter Array Elements :\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the Element to be added : ");
    scanf("%d",&c);

    //reverse
    for(i=0,j=3;i<j;i++,j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    //combine
    for (i=0;i<n;i++)
    {
        b=b*10+a[i];
    }
    printf("The Final Answer is : %d",b+c);


}
