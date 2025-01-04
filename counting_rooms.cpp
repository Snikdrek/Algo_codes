#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<vector<char>>pat;
vector<vector<bool>>vis;
ll n,m;
ll dx[4]={-1,0,1,0};
ll dy[4]={0,1,0,-1};
bool issafe(ll x,ll y)
{
    if(x>=n or y>=m or x<0 or y<0)
    {
        return false;
    }
    if(pat[x][y]=='#' or vis[x][y]==true)
    {
        return false;
    }
    return true;
}
void dfs(ll x,ll y)
{
    vis[x][y]=true;
    for(ll i=0;i<4;i++)
    {
        ll nx=dx[i]+x;
        ll ny=dy[i]+y;
        if(issafe(nx,ny))
        {
            dfs(nx,ny);
        }
    }
}
int main()
{
    cin>>n>>m;
    pat.resize(n,vector<char>(m,0));
    vis.resize(n,vector<bool>(m,false));
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cin>>pat[i][j];
        }
    }
    ll ans=0;
      for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(pat[i][j]=='.' and !vis[i][j])
            {
                dfs(i,j);
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}