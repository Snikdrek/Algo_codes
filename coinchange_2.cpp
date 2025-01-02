//total number of combinations
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back
#define N 100000
#define MOD ((ll)1e9 + 7)
using namespace std;
ll n, val;
vector<ll> coins(N);
ll dp[105][N];
ll poscom(ll coinidx,ll remaining)
{
      if(remaining==0)
    {
        return 1;
    }
    if(coinidx>=n or remaining<0)
    {
        return 0;
    }
    if(dp[coinidx][remaining]!=-1)
    {
        return dp[coinidx][remaining];
    }
    return dp[coinidx][remaining]=(poscom(coinidx+1,remaining)+poscom(coinidx+1,remaining-coins[coinidx]))%MOD;
}
int main()
{
    memset(dp,-1,sizeof(dp));
   cin>>n>>val;
   for(ll i=0;i<n;i++)
   {
    cin>>coins[i];
   }
   cout<<poscom(0,val)<<endl;

}