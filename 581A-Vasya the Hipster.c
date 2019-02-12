#include<stdio.h>

int main()
{
    int a,b,n,m;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        n=b;
        m=(a-b)/2;

    }
    else
    {
        n=a;
        m=(b-a)/2;
    }
    printf("%d %d\n",n,m);
}
