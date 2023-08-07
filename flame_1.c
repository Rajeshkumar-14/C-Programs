#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int len1,len2,total,i,j,r,s,g,h;
    char str1[22],str2[22],a[11]= {' ','f','l','a','m','e','s'},b[11];
    scanf("%s",str1);
    scanf("%s",str2);
    len1=strlen(str1);
    len2=strlen(str2);
    total=len1+len2;
    for(i=0; i<len1; i++)
    {
        for(j=0; j<len2; j++)
        {
            if(str1[i]==str2[j])
            {
                str1[i]=str2[j]=' ';
                total=total-2;
                break;

            }
        }
    }
    for(r=6; r>1; r--)
    {

        s=total%r;

        if(s==0)
        {
            s=r;
            i=1;
        }
        else
        {
            a[s]='/0';
            i=s+1;
        }
        j=1;
        while(1)
        {
            if(i==s)
            {
                break;
            }
            b[j]=a[i];
            if(i==r)
            {
                i=0;
            }
            i++;
            j++;
        }
        for(i=1; i<=r-1; i++)
        {

            a[i]=b[i];

        }

    }
    switch(a[1])
    {
    case 'f':
        printf("Friendship");
        break;
    case 'l':
        printf("Love");
        break;
    case 'a':
        printf("Affection");
        break;
    case 'm':
        printf("Marriage");
        break;
    case 'e':
        printf("Enemy");
        break;
    case 's':
        printf("Sister");
        break;
    }

}
