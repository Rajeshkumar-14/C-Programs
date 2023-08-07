#include<stdio.h>
#include<string.h>

void main()
{
    char str[]="I LOVE RATHINAM";
    char *word;

    word=strtok(str," ");

    while(word!=NULL)
    {
        printf("%s ",word);
        word=strtok(NULL," ");
    }
}
