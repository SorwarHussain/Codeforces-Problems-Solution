#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sum=0;
    string ch;
    cin>>n;
    for(i=0;i<n;i++)
    {

        cin>>ch;
        if(ch=="X++"||ch=="++X")
        {
            sum+=1;
        }
        else
        {
            sum+=-1;
        }
    }
    cout<<sum;
}
