#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    char a[100];
    struct node *next;
}*newnode,*head,*temp;

char* rotation(char str[],int len);

int main()
{
    int n;
    printf("Enter No of Words : ");
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        newnode = (struct node*)(malloc(sizeof(struct node)));

        printf("Enter Data : ");
        scanf("%s",newnode->a);
        newnode->next=NULL;

        if(head==NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }

    char b[10];
    printf("Enter Character : ");
    scanf("%s",b);

    int len=strlen(b);

    temp=head;

    int cnt = 0;
    while(temp!=NULL)
    {
        char str[10];
        strcpy(str, b);
        int good = 1;

        for(int i=0; i<strlen(temp->a); i++)
        {
            int found = 0;
            for(int j=0; j<strlen(str); j++)
            {
                if(temp->a[i]==str[j])
                {
                    str[j] = ' ';
                    found = 1;
                    break;
                }
            }
            if(!found)
            {
                good = 0;
                break;
            }
        }

        if(good)
        {
            cnt += strlen(temp->a);
        }
        else
        {
            strcpy(str, b);
            for(int i=0; i<len; i++)
            {
                char* rotated_str = rotation(str, len);
                good = 1;
                for(int j=0; j<strlen(temp->a); j++)
                {
                    int found = 0;
                    for(int k=0; k<strlen(rotated_str); k++)
                    {
                        if(temp->a[j]==rotated_str[k])
                        {
                            rotated_str[k] = ' ';
                            found = 1;
                            break;
                        }
                    }
                    if(!found)
                    {
                        good = 0;
                        break;
                    }
                }
                if(good)
                {
                    cnt += strlen(temp->a);
                    break;
                }
                strcpy(str, rotated_str);
            }
        }

        temp = temp->next;
    }

    printf("Sum of Lengths of Good Strings: %d\n", cnt);

    return 0;
}

char* rotation(char str[],int len)
{
    for (int i = 0; i < 1; i++)
    {
        char a = str[0];
        for(int j = 0; j < len - 1; j++)
        {
            str[j] = str[j+1];
        }
        str[len-1] = a;
    }

    return str;
}
