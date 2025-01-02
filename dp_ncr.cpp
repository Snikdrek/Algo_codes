#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back
#define N 10000
using namespace std;
vector<pair<ll,ll>>v[N];
bool visited[N];
ll dist[N];
ll dp[N][N];
ll mod=1e9+7;
ll ncr(ll n,ll r)
{
   /*
        n!
      --------
      r!(n-r)!
   */
  if(n<r or n<0 or r<0)
  {
    return 0;
  }
  if(r==0 or n==r)
  {
    return 1;
  }
  if(dp[n][r]!=-1)
  {
    return dp[n][r];
  }
  dp[n][r]=((ncr(n-1,r-1)+ncr(n-1,r))%mod);//n-1cr-1 +n-1cr
  return dp[n][r];

}
int main()
{
    memset(dp,-1,sizeof(dp));
    ll n,r;
    cin>>n>>r;
    cout<<ncr(n,r);
}
