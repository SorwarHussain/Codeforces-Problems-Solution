#include<stdio.h>

int main()
{
    const int n=5;
    int a[n][n],i,j,c=0,c1=0,c2=0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(a[i][j]==1)
            {
                if(i==3)
                {
                    if(j>3)
                    {
                        c2=j-3;
                    }
                    else if(j<3)
                    {
                        c2=3-j;
                    }
                    else{}
                    c=c1+c2;

                }
                else if(i>3)
                {
                    c1=i-3;
                    if(j>3)
                    {
                        c2=j-3;
                    }
                    else if(j<3)
                    {
                        c2=3-j;
                    }
                   else{}
                    c=c1+c2;
                }
                else if(i<3)
                {
                    c1=3-i;
                    if(j>3)
                    {
                        c2=j-3;
                    }
                    else if(j<3)
                    {
                        c2=3-j;
                    }
                    else{}
                    c=c1+c2;
                }

            }

        }

    }
    printf("%d\n",c);

}

