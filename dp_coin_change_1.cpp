#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back
#define N 10000
using namespace std;
  ll n,val;
vector<ll>coins(N);
ll dp[N][N];
ll coins1(ll coinidx,ll remaining)
{
    if(remaining==0)
    {
        return 0;
    }
    if(remaining<0)
    {
        return N;
    }
    
    
    if(coinidx>n)
    {
        return N;
    }
    if(dp[coinidx][remaining]!=-1)
    {
      
        return dp[coinidx][remaining];
    }
    
   return dp[coinidx][remaining]=min((coins1(coinidx+1,remaining)),coins1(coinidx+1,remaining-coins[coinidx])+1);
    
}
int main()
{
    memset(dp,-1,sizeof(dp));
  
    cin>>n>>val;
    for(ll i=0;i<n;i++)
    {
       cin>>coins[i];
    }
    if(coins1(0,val)!=N){
        cout<<"YES"<<endl;
        cout<<coins1(1,val)<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }

    
}