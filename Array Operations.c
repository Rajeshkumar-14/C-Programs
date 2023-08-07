#include<stdio.h>
#include<math.h>
#define maxsize 100

int a[maxsize],n,i;


void create_array()
{
    printf("Enter ARRAY size :");
    scanf("%d",&n);

    printf("Enter %d elements for array : \n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    return a[n];
}

void display_array()
{
    create_array();

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void insert_array()
{
    create_array();

    int x;
    printf("Enter Element to be Inserted : ");
    scanf("%d",&x);

    int pos,i;
    printf("Enter the Position to be INSERTED : ");
    scanf("%d",&pos);

    n++;

    for(i=n-1; i>=pos; i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=x;

    printf("After Inserting an ELEMENT %d at Position %d is : \n",x,pos);

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}

void delete_array()
{
    create_array();

    printf("Your Array is : \n");

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    int b,cnt=0,pos;

    printf("Enter the element to DELETE : ");

    scanf("%d",&b);
    for (i=0; i<n; i++)
    {
        if (a[i]==b)
        {
            cnt=1;
            pos=i;
            break;
        }
    }

    if(cnt==1)
    {
        for(i=pos; i<n-1; i++)
        {
            a[i]=a[i+1];
        }

        printf("The Array after DELETING the element %d is: \n",b);

        for (i=0; i<n-1; i++)
        {
            printf("%d ",a[i]);
        }

    }
    else
    {
        printf("Element %d is not found in the array\n",b);
    }
    return 0;
}

void search_array()
{
    create_array();

    int s,cnt=0;
    printf("Enter the SEARCH ELEMENT : ");
    scanf("%d",&s);

    for(i=0; i<n; i++)
    {
        if(s==a[i])
        {
            cnt++;
            break;
        }
    }
    if(cnt!=0)
    {
        printf("The Element %d is found at the POSITION %d ",s,i+1);
    }
    else
    {
        printf("The Element %d is NOT FOUND..",s);
    }
    return 0;

}

void main()
{
    int choice;
    printf(" ARRAY OPERATIONS :\n");
    printf(" Choice 1 : CREATE AN ARRAY \n Choice 2 : DISPLAY THE ARRAY \n Choice 3 : INSERT AN ELEMENT IN A SPECIFIC PLACE \n Choice 4 : DELETE AN ELEMENT IN ARRAY \n Choice 5 : SEARCH AN ELEMENT IN A ARRAY \n Choice 6 : EXIT \n");
    printf("\n");

    do
    {
        printf("ENTER YOUR CHOICE : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
        {
            create_array();
            break;
        }
        case 2:
        {
            display_array();
            break;
        }
        case 3:
        {
            insert_array();
            break;
        }
        case 4:
        {
            delete_array();
            break;
        }
        case 5:
        {
            search_array();
            break;
        }
        case 6:
        {
            break;
        }
        default :
        {
            printf("INVALID CHOICE...");
        }
        }

    }while(choice!=6);

    return 0;
}

