#include<stdio.h>

int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);
    int a[n][3];
    for(i=0; i<n; i++)
    {

        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);

        }
        if((a[i][0]&&a[i][1])||(a[i][1]&&a[i][2])||(a[i][2]&&a[i][0]))
        {
            count++;
        }



    }

    printf("%d\n",count);



}
