#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back
using namespace std;
ll exp(ll b,ll p)
{
    if(p==0)
    {
        return 1;
    }
    if(p%2==0)
    {
        return exp(b,p/2)*exp(b,p/2);

    }
    else
    {
        return b*exp(b,p/2)*exp(b,p/2);
    }
}
int main()
{
    ll b,p;
    cin>>b>>p;
    cout<<exp(b,p)<<endl;
}