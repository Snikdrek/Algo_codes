#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back
#define N 100000
using namespace std;
vector<ll>v[N];
bool visited[N];
void bfs(ll vertex)
{
 queue<ll>qu;
 qu.push(vertex);
 visited[vertex]=true;
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
    
    return 0;
}