#include<stdio.h>
#include<math.h>
#define max 100
int a[max],b[max],n=1,i,j,top=-1;
void push();
void pop;


int main()
{
    int option;

    while(1)
    {
        printf("1.PUSH \n 2.POP \n");
        scanf("%d",option);

        switch(option)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Enter valid option...");
            break;
        }
    }
}
