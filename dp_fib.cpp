#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back
#define N 1000000
using namespace std;
vector<pair<ll,ll>>v[N];
bool visited[N];
ll dist[N];
ll dp[N];
ll mod=1e9+7;
ll fib(ll n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;

    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    return dp[n]=fib(n-1)+fib(n-2);
}
int main()
{
    memset(dp,-1,sizeof(dp));
    ll n;
    cin>>n;
    cout<<fib(n)<<endl;
}













/*
dp [][]
void bfs(ll a,ll b)
if(dp[a][b]!=-1)
{
  return dp[a][b];
}
return dp[a][b]=fib(n-1)+fib(n-2);

memset(dp,-1,sizeof(dp));

fib(3)
*/