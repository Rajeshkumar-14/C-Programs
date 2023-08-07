#include <stdio.h>
#include <limits.h>

int main()
{
    int t,i;

    printf("Enter the Array size : ");

    scanf("%d",&t);

    int a[t];

    printf("Enter the Array Values :\n ");

    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }

  int max1 = INT_MIN;
  int max2 = INT_MIN;
  int min1 = INT_MAX;
  int min2 = INT_MAX;

  int n;

  for (i=0;i<t;i++)
    {
    n = a[i];
        if (n > max1)
        {
            max2 = max1;
            max1 = n;
        }
        else if (n > max2)
        {
            max2 = n;
        }

        if (n < min1)
        {
            min2 = min1;
            min1 = n;
        }
        else if (n < min2)
        {
            min2 = n;
        }
    }

  if (max1 * max2 > min1 * min2)
    {
        printf("The highest product pair in array is {%d, %d}\n", max1, max2);
    }
  else
    {
        printf("The highest product pair in array is {%d, %d}\n", min1, min2);
    }

  return 0;
}

