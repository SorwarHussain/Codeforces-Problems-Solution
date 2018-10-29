#include<stdio.h>


int main()
{
    int x,n,s;
    scanf("%d",&x);
    n=x%5;
    s=x/5;
    if(n==0)
    {

        printf("%d\n",s);
    }
    else
    {
        s++;
        printf("%d\n",s);
    }
    return 0;
}
