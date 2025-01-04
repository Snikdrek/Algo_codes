#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back
#define N 100000
using namespace std;
vector<ll>v[N];
bool visited[N];
vector<ll>dist(N,-1);
void bfs(ll vertex)
{
 queue<ll>qu;
 qu.push(vertex);
 visited[vertex]=true;
 dist[vertex]=0;
 while(!qu.empty())
 {
    ll cur=qu.front();
    qu.pop();
    cout<<cur<<" ";
    for(ll i=0;i<v[cur].size();i++)
    {
        ll child=v[cur][i];
        if(!visited[child])
        {
            qu.push(child);
            visited[child]=true;
            dist[child] = dist[cur] + 1;
        }
    }
 }
}
int main()
{
    ll n,e;
    cin>>n>>e;
   
    for(ll i=0;i<e;i++)
    {
        ll v1,v2;
        cin>>v1>>v2;
        v[v1].pb(v2);
        v[v2].pb(v1);
    }
    bfs(1);
    for(ll i=1;i<n;i++)
    {
        cout<<dist[i]<<endl;
    }
    return 0;
}