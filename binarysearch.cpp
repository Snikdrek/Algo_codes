#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back

using namespace std;
ll bs(vector<ll>&v,ll n,ll t)
{
    ll l=0;
    ll r=n-1;
    ll pos=-1;
    while(l<=r)
    {
        ll m=l+(r-l)/2;
        if(v[m]==t)
        {
          pos=m;
          break;
        }
        else if(v[m]<t)
        {
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    return pos;
}
ll bsfreq(vector<ll>&v,ll n,ll t)
{
    auto lb =lower_bound(v.begin(),v.end(),t);
    auto ub =upper_bound(v.begin(),v.end(),t);
    ll freq=ub-lb;
    return freq;
}
ll bsfun(vector<ll>&v,ll n,ll t)
{
    //first occurence
    ll l=0;
    ll r=n-1;
    ll fp=-1;
    while(l<=r)
    {
        ll m=(l+r)/2;//1 2 3 4 4m 4 4 5 6
        if(v[m]==t)
        {
            fp=m;
            r=m-1;
        }
        else if(v[m]<t)
        {
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
     l=0;
     r=n-1;
    ll lp=-1;
    while(l<=r)
    {
        ll m=(l+r)/2;//1 2 3 4 4m 4 4 5 6
        if(v[m]==t)
        {
            lp=m;
            l=m+1;
        }
       else if(v[m]<t)
        {
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    if (fp == -1 || lp == -1) {
        return 0;
    }
    return lp - fp + 1;

}


int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll t;
    cin>>t;
    ll l=0;
    ll r=n-1;
    ll pos=-1;
    while(l<=r)
    {
        ll m=l+(r-l)/2;
        if(v[m]==t)
        {
          pos=m;
          break;
        }
        else if(v[m]<t)
        {
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    ll ans=bs(v,n,t);
    ll freq=bsfreq(v,n,t);
    ll ff=bsfun(v,n,t);
    cout<<ans+1<<endl;
    cout<<freq<<endl;
    cout<<ff<<endl;
}