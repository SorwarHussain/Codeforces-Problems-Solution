 #include<stdio.h>


int main()
{
    int n,i,sum=0,count=0,c3=0,c1=0,g=0,h=0,k=0,l=0,m=0,n1=0,b=0,num_car;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }

    for(i=0; i<n; i++)
    {
        if(a[i]==4)
        {
            sum++;
        }
        if(a[i]==2)
        {
            count++;
        }
        if(a[i]==3)
        {
            c3++;
        }
        if(a[i]==1)
        {
            c1++;
        }
    }
    if(count%2==0)
    {
        count/=2;
    }
    else
    {
        l=1;
        count--;
        count/=2;
    }


    if(c3==c1)
    {
        g=c1;
        if(l==1)
        {
            k=l;
        }
    }
    else if(c3>c1)
    {


        h=c3-c1;

        g=c1;
        if(l==1)
        {
            k=l;
            k=k+h;
        }
        else
        {
            k=h;
        }
    }
    else
    {
        h=c1-c3;
        g=c3;

        if(h>2&&l==1)
        {

            m=h-2;
            b=l;
            n1=m/4;
            if((n1*4)!=m)
            {
                n1++;
            }



        }


       else if(h<=2&&l==1)
        {
            n1++;
        }


        else
        {
            m=h;
            n1=m/4;
            if((n1*4)!=m)
            {
                n1++;
            }
        }
    }

    num_car=sum+count+g+k+n1+b;
    printf("%d\n",num_car);


    return 0;
}
