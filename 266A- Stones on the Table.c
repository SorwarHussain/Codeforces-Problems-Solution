#include<stdio.h>

int main()
{
    int n,m,i,j,count=0,mark;
    scanf("%d",&n);
    char ch[n],c;
    for(i=0; i<=n; i++)
    {
        c=getchar();
        ch[i]=c;
        if(i==0)
        {
            mark=ch[0];
        }

        else
        {
            if(mark==ch[i])
            {
                count++;
                //mark=ch[i];


            }
            else
            {
                mark=ch[i];
            }

        }


    }
    printf("%d\n",count);
}
