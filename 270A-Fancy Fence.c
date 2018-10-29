#include<stdio.h>


int main()
{
    int i,n,k,count;
    scanf("%d",&n);
    int a[n],j;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        count=0;
        for(j=3,k=180; j<=360; j++)
        {
            if(j*a[i]==k)
            {
                count++;
                break;
            }
            k+=180;

        }
        if(count>0)
        {
            printf("YES\n");

        }
        else
        {
            printf("NO\n");
        }

    }

}
