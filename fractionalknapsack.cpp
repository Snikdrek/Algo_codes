#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back

using namespace std;
bool compare(pair<ll,ll>p1,pair<ll,ll>p2)
{
    double v1=(double)(p1.first/p1.second);
    double v2=(double)(p2.first/p2.second);
    return v1>v2;
}
int main()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    ll w;
    cin>>w;
    ll ans=0;
    sort(v.begin(),v.end(),compare);
    for(ll i=0;i<n;i++)
    {
         if(w>=v[i].second)
         {
             ans+=v[i].first;
             w-=v[i].second;
            //  continue;
         }
         else
         {
         double x=(double)(v[i].first/v[i].second);
         ans+=x*w;
         w-=w;
      
    }
    }
    cout<<ans<<endl;
}