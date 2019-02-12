#include<stdio.h>

int main()
{
    long long int n,m,a,j,s,t,i;
    scanf("%lld %lld %lld",&n,&m,&a);
    i=n/a;
    j=i*a;
    if(j==n)
    {
        s=i;
    }
    else
    {
        s=(i+1);
    }

    long long int k,l,p,c;
    k=m-a;

     if(k>0)
    {
        l=k/a;
        p=l*a;
        if(p==k)
        {
            c=l*s;

        }
        else
        {
            c=(l+1)*s;

        }


    }
    else
    {
        c=0;

    }
    t=s+c;
    printf("%lld",t);
}
