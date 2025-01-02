#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back

using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> wt(n);
    vector<ll> val(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> wt[i] >> val[i];
    }                  
    ll cap;
    cin>>cap;
    ll ans = 0;
                                     
    for(ll p=0;p<1<<n;p++)//possibilities 010 111
    {
        ll wwt=0;
        ll pr=0;

        for(ll i=0;i<n;i++)
        {
            if(p & (1<<i))
            {
                 wwt+=wt[i];
                 pr+=val[i];
            }

        }
        if(wwt<=cap)
        {
            ans=max(ans,pr);
        }
    }
    cout<<ans<<endl;
}