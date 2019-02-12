#include<stdio.h>
#include<string.h>


int main()
{
    char str[100];
    char ch;
    int n,i,j,len;
    gets(str);
    len=strlen(str);
    for(i=0;i<len; i++)
    {
        if(str[i]!=43)
        {
            for(j=i+2;j<len; j+=2)
            {
                if(str[i]>str[j])
                {
                    ch=str[i];
                    str[i]=str[j];
                    str[j]=ch;
                }

            }
        }

    }
    printf("%s",str);
}

