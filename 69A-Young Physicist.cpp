#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int x[n],y[n],z[n],x1=0,y1=0,z1=0;
    for(i=1; i<=n; i++)
    {
        cin>>x[i]>>y[i]>>z[i];
        x1+=x[i];
        y1+=y[i];
        z1+=z[i];
    }
    if(x1==0&&y1==0&&z1==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
