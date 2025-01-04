#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back
#define N 1000
using namespace std;
ll dp[N][N];
ll weight[N];
ll value[N];
ll n;
ll knapans(ll curr,ll capacity)// curr currently koita neya hoise
{
  
    if(curr==n)
    {
        return 0;
    }
      if(capacity<0)
    {
        return (ll)(-1e9);//returning negative infinity because we can't take negative weight and not positve infinity because we can't take infinite weight
    }
    ll ans=-1;
    if(dp[curr][capacity]!=-1)
    {
        return dp[curr][capacity];
    }
    ans=max(ans,knapans(curr+1,capacity-weight[curr])+value[curr]);
    ll tmp=knapans(curr+1,capacity);//curr item nile na nile same capacity e rakhbo so capacity same rakhbo and curr+1 e jabo 
    ans=max(tmp,ans);
    return ans;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    ll cap;
    cin>>n>>cap;

    for(ll i=0;i<n;i++)
    {
         ll w,v;
         cin>>w>>v;
         weight[i]=w;
         value[i]=v;
    }
    cout<<knapans(0,cap)<<endl;

}
// 5 6 5 5