#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back
#define N 1000000
using namespace std;
vector<pair<ll,ll>>v[N];
bool visited[N];
ll dist[N];
//priority queue dijkstra
void dijkstra(ll vertex)
{
    priority_queue<pair<ll,ll>>pq;//first element is distance and second is vertex
    pq.push({0,vertex});
    dist[vertex]=0;
    while(!pq.empty())
    {
        ll cur=pq.top().second;
        pq.pop();
        if(visited[cur])
        {
            continue;
        }
        visited[cur]=true;
        for(ll i=0;i<v[cur].size();i++)
        {
           ll child=v[cur][i].first;
              ll weight=v[cur][i].second;
              if(dist[child]>dist[cur]+weight)
              {
                    dist[child]=dist[cur]+weight;
                    pq.push({-dist[child],child});//priority queue is max heap so we have to make it min heap by adding -ve sign to distance     
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
        ll v1,v2,w;
        cin>>v1>>v2>>w;
        v[v1].pb({v2,w});
        v[v2].pb({v1,w});
    }
    for(ll i=0;i<N;i++)
    {
        dist[i]=LLONG_MAX;
    }
    dijkstra(0);
    for(ll i=0;i<=n;i++)
    {
        cout<<dist[i]<<" ";
    }


}

