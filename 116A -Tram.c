#include<stdio.h>


int main()
{
    int n,i,cm,d;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    cm=b[0];
    for(i=0; i<n; i++)
    {
        if(b[i]>cm)
        {
            cm=b[i];
        }
        d=b[i]-a[i+1];
        b[i+1]=b[i+1]+d;


    }
    printf("%d\n",cm);

}

