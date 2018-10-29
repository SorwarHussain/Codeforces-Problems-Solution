#include<stdio.h>


int main()
{
    int a,b,c,max,s1,s2,s3,s4,s5,s6;
    scanf("%d %d %d",&a,&b,&c);
    s1=a+(b*c);
    s2=a*(b+c);
    s3=a*b*c;
    s4=(a+b)*c;
    s5=a+b+c;
    s6=(a*b)+c;
    max=s1;
    if(s2>max)
    {
        max=s2;
    }
    if(s3>max)
    {
        max=s3;

    }
    if(s4>max)
    {
        max=s4;
    }
    if(s5>max)
    {
        max=s5;
    }
    if(s6>max)

    {
        max=s6;
    }
    printf("%d\n",max);
}
