#include<bits/stdc++.h>

using namespace std;
int main()
{
    int k,n,w,i,sum=0,borrow;
    cin>>k>>n>>w;
    for(i=1; i<=w; i++)
    {
        sum+=(k*i);
    }
    borrow=sum-n;
    if(borrow<0)
        cout<<0;
    else
        cout<<borrow;
}
