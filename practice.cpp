#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pu pop_back
#define N 1000
#define mod 1000000000
using namespace std;
ll dp[100][N];
 ll n,totv;
    ll weight[N];
    ll value[N];

   ll knapsack(ll ci,ll rem)
   {
  
   
    if(rem<0)
    {
        return -1222;
    }
      if(ci>=n)
    {
        return 0;
    }
    if(dp[ci][rem]!=-1)
    {
        return dp[ci][rem];
    }
    ll ans=-1;
     ans=max(ans,knapsack(ci+1,rem-weight[ci])+value[ci]);
    ll t=knapsack(ci+1,rem);
   return dp[ci][rem]=max(ans,t);
    
   }
   bool compare(pair<ll,ll>p1,pair<ll,ll>p2)
   {
    double v1=(double)(p1.second/p1.first);
    double v2=(double)(p2.second/p2.first);
    return v1>v2;
   }
   bool compare1(pair<ll,ll>p1,pair<ll,ll>p2)
   {
    ll v1=p1.second;
    ll v2=p2.second;
   return v1<v2;
   }
   int main()
   {
      cin>>n;
      vector<pair<ll,ll>>v(n);

      for(ll i=0;i<n;i++)
      {
        cin>>v[i].first>>v[i].second;
      }
      sort(v.begin(),v.end(),compare1);
      ll ans=1;
      ll end=v[0].second;
      for(ll i=1;i<n;i++)
      {
        if(v[i].first>=end)
        {
            ans++;
            end=v[i].second;
            
        }
      }
      cout<<ans<<endl;
   }
//    int main()
//    {
//     memset(dp,-1,sizeof(dp));
//     cin>>n>>totv;
//     vector<pair<ll,ll>>v(n);
//     ll ans=0;
//     for(ll i=0;i<n;i++)
//    {
//       cin>>v[i].first>>v[i].second;
//    }
//    sort(v.begin(),v.end(),compare);
//    for(ll i=0;i<n;i++)
//    {
//           if(totv>=v[i].first)
//           {
//             ans+=v[i].second;
//             totv-=v[i].first;
//           }
//           else
//           {
//             double x=(double)(v[i].second/v[i].first);
//             ans+=x*totv;
//             totv=0;
//           }
//    }
//    cout<<ans<<endl;


//    }
// int main()

// {memset(dp,-1,sizeof(dp));

//     cin>>n>>totv;
//     for(ll i=0;i<n;i++)
//     {
//         ll w,v;
//         cin>>w>>v;
//         weight[i]=w;
//         value[i]=v;
//     }
//     cout<<knapsack(0,totv)<<endl;
//     // ll ans=-1;
//     // for(ll i=0;i<1<<n;i++)
//     // {
//     //     ll tw=0;
//     //     ll tv=0;
//     //     for(ll m=0;m<n;m++)
//     //     {
//     //         if(i&1<<m)
//     //         {
//     //             tw+=weight[m];
//     //             tv+=value[m];
//     //         }
//     //     }
//     //     if(tw<=totv)
//     //     {
//     //         ans=max(ans,tv);
//     //     }
//     // }
//     // cout<<ans<<endl;
// }
