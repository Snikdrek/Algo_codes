#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100000
struct gr{
    ll v1,v2,w;
    
};
ll ranke[N];
ll par[N];
gr g[N];
bool cmp(gr g1, gr g2)
{
    return g1.w<g2.w;
}
ll find(ll a)
{
    if(par[a]==-1)
    {
        return a;
    }
   return  par[a]=find(par[a]);

}
ll unions(ll a,ll b)
{
    ll ra=find(a);
    ll rb=find(b);
    if(ra!=rb)
    {
        ranke[a]+=ranke[b];
        par[rb]=ra;
    }
}
int main()
{
    ll n,m;
    
    cin>>n>>m;
    for(ll i=0;i<n;i++)
    {
        ranke[i]=0;
        par[i]=-1;
    }
    for(ll i=0;i<m;i++)
    {
        cin>>g[i].v1>>g[i].v2>>g[i].w;
    }
    sort(g,g+m,cmp);
    ll ans=0;
    for(ll i=0;i<m;i++)
    {
        ll ap=find(g[i].v1);
        ll bp=find(g[i].v2);
        if(ap!=bp)
        {
            ans+=g[i].w;
            unions(ap,bp);
        }
    }
    cout<<ans<<endl;
}