#include<stdio.h>


int main()
{
    int i;
    char str[1000];
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[0]>='a'&&str[0]<='z')
        {
            str[0]-=32;
            putchar(str[0]);
        }
        else
        {
            putchar(str[i]);
        }


    }
}
