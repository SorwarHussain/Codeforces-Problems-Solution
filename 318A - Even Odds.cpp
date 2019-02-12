#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,k,k1,k2,ans;
    cin>>n>>k;
    k1=ceil(n/2.0);
    if(k<=k1)
    {
        ans=k*2-1;
        cout<<ans<<endl;
    }
    else
    {
        k2=k-k1;
        ans=2*k2;
        cout<<ans<<endl;
    }
    return 0;
}
