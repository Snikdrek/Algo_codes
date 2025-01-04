#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define N 100000
using namespace std;
vector<vector<ll>>v(N);
bool visited[N];
ll n;
ll ans=0;
void dfs(ll ver,ll par)
{
    visited[ver]=1;
    // cout<<"cur"<<" "<<ver<<endl;
     for(ll i=0;i<v[ver].size();i++)
    {
        ll child=v[ver][i];
        // cout<<"parent"<<ver <<"child"<<child<<endl;
        if(visited[child])
        {
            continue;
        }
        dfs(child,ver);
        if(child!=par)
        {
            ans=1;
            return;
        }
    }
}
void bfs(ll ver)
{
   queue<ll>q;
   q.push(ver);
   visited[ver]=true;
   while(!q.empty())
   {
    ll cur=q.front();
    q.pop();
    cout<<cur<<" ";
    for(ll i=0;i<v[cur].size();i++)
    {
        ll child=v[cur][i];
        if(!visited[child])
        {
            q.push(child);
            visited[child]=true;
        }
    }
   }
}
int main()
{
    ll m;
    cin>>n>>m;
    
    vector<ll>indegree(n,0);
    for(ll i=0;i<m;i++)
    {
        ll v1,v2;
        cin>>v1>>v2;
        v[v1].pb(v2);
        v[v2].pb(v1);
        
        // indegree[v2]++;
    }
    dfs(1,-1);
    if(ans)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    // queue<ll>q;
    // for(ll i=0;i<n;i++)
    // {
    //     if(indegree[i]==0)
    //     {
    //         q.push(i);
    //     }
    // }
    // while(!q.empty())
    // {
    //     ll cur=q.front();
    //     q.pop();
    //     cout<<cur<<" ";
    //     for(ll i=0;i<v[cur].size();i++)
    //     {
    //         ll child=v[cur][i];
    //         indegree[child]--;
    //         if(indegree[child]==0)
    //         {
    //             q.push(child);
    //         }
    //     }
    // }


}