#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    if(n%2==0)
    {
        a=n/2;
        if(a%2==0)
        {
            cout<<a<<" "<<a<<endl;
        }
        else
        {
            cout<<a-1<<" "<<a+1<<endl;
        }

    }
    else
    {
        a=9;
        b=n-a;
        cout<<a<<" "<<b<<endl;
    }
}
