#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define po pop_back
#define N 100000

using namespace std;
int main()
{
   ll n,m;

   cin>>n>>m;
   vector<ll>v[n];
   vector<ll>indegree(n,0);
   for(ll i=0;i<m;i++)
   {
     ll a,b;
     cin>>a>>b;
     v[a].pb(b);
     indegree[b]++;//child er indegree barbe
   }
   queue<ll>q;
   for(ll i=0;i<n;i++)
   {
     if(indegree[i]==0)
     {
        q.push(i);
     }
   }
   while(!q.empty())
   {
    ll cur=q.front();
    cout<<cur<<" ";
    q.pop();
    for(ll i=0;i<v[cur].size();i++)
    {
        indegree[v[cur][i]]--;
        if(indegree[v[cur][i]]==0)
        {
            q.push(v[cur][i]);
        }
    }

   }
}