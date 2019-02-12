#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m;
    cin>>n;
    if(n%2==0)
    {
        m=n/2;
        cout<<m<<endl;
    }
    else
    {
        m=-ceil(n/2.0);
        cout<<m<<endl;
    }
    return 0;
}
