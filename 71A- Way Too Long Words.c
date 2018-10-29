#include<stdio.h>
#include<string.h>

int main()
{
    int n,l=0,i;
    scanf("%d",&n);
    char str[100];
    for(i=0; i<=n; i++)
    {
        gets(str);
        l=strlen(str);
        if(l<=10)
        {
            printf("%s\n",str);
        }
        else
        {
            printf("%c%d%c\n",str[0],(l-2),str[l-1]);
        }
    }
    return 0;
}
