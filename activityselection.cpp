#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back

using namespace std;
bool compare(pair<ll,ll>p1,pair<ll,ll>p2)
{
    ll v1=p1.second;
    ll v2=p2.second;
    return v1<v2;
}
int main()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),compare);
    ll ans=1;//shurur ta nisi
    ll end=v[0].second;//first ending
    for(ll i=1;i<n;i++)
    {
        if(end<=v[i].first)
        {
            ans++;
            end=v[i].second;
        }
    }
    cout<<ans<<endl;
}