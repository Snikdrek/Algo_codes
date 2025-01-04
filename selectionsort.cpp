#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            if(v[j]<v[i])
            {
                swap(v[i],v[j]);
            }
        }
    }
    for(ll i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

}