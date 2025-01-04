#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define N 1000000007
ll dp[100][100];
ll n;
ll ans=0;
bool issafe(ll x,ll y)
{
    for(ll i=0;i<x;i++)
    {
        if(dp[i][y]==1)
        {
            return false;
        }
    }
    for(ll i=x,j=y;i>=0 and j>=0;i--,j--)
    {
        if(dp[i][j]==1)
        {
            return false;
        }
    }
    for(ll i=x,j=y;i>=0 and j<n;i--,j++)
    {
        if(dp[i][j]==1)
        {
            return false;
        }
    }
    return true;
}
bool nqueen(ll x)
{
    if(x==n)
    {
        ans++;
        return false;
    }
    for(ll i=0;i<n;i++)
    {
        if(issafe(x,i))
        {
            dp[x][i]=1;
           ans+= nqueen(x+1);
            dp[x][i]=0;
        }
    }
    return false;
}
int main()
{
    dp[100][100]={0};
    cin>>n;
    nqueen(0);
    cout<<ans<<endl;
}
