#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define N 100000
using namespace std;
ll dp[100][100];
   ll n;
 vector<ll>coins;
vector<ll>weight;
    vector<ll>value;
ll ncr(ll n,ll r)
{
    if(n<0)
    {
        return 0;
    }
    if(r==0)
    {
        return 1;
    }
    if(dp[n][r]!=-1)
    {
        return dp[n][r];
    }
    return dp[n][r]=(ncr(n-1,r)+ncr(n-1,r-1))%10000000;
}
ll knap(ll ci,ll rem)

{
 if(ci>=n)
 {
    return 0;
 }
 if(rem<0)
 {
    return -(ll)100000;
 }
 if(dp[ci][rem]!=-1)
 {
    return dp[ci][rem];
 }
 ll ans=-1;
 ans=max(ans,knap(ci+1,rem-weight[ci])+value[ci]);
 ll tmp=knap(ci+1,rem);
 return dp[ci][rem]=max(ans,tmp);

}
// int main()
// {
//     memset(dp,-1,sizeof(dp));
//     cin>>n;
//     weight.resize(n);
//     value.resize(n);
//     for(ll i=0;i<n;i++)
//     {
//         cin>>weight[i]>>value[i];
//     }
//     ll tw;
//     cin>>tw;

//     ll fn= knap(0,tw);
//     cout<<fn<<endl;
// }
ll cc(ll cid,ll rem)
{
    if(rem<0)
   {
    return 0;
   }
   if(rem==0)
   {
    return 1;
   }
   if(cid>=n)
   {
    return 0;
   }
   
   if(dp[cid][rem]!=-1)
   {
    return dp[cid][rem];
   }
   return dp[cid][rem]=(cc(cid+1,rem)+cc(cid+1,rem-coins[cid]))%10000000;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    ll tot;
    cin>>n>>tot;
    coins.resize(n);
    for(ll i=0;i<n;i++)
    {
        cin>>coins[i];
    }
    if(cc(0,tot)!=N)
    {
        cout<<cc(0,tot)<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }


}