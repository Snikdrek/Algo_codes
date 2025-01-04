#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back
#define N 1000000

using namespace std;
vector<vector<ll>>v;
bool visited[N];
void dfs(ll ver)
{
    visited[ver]=true;
    cout<<"start  "<<ver<<endl;
    for(ll i=0;i<v[ver].size();i++) 
    {
        ll child = v[ver][i];
        cout<<"child"<<child<<" "<<"parent"<<ver<<endl;
               if(visited[child])
               {
                continue;
               }
               dfs(child);
    }
    
}
int main()
{
    v.resize(N);
    ll ve,e;
    cin>>ve>>e;
    for(ll i=0;i<e;i++)
    {
        ll v1,v2;
        cin>>v1>>v2;
        v[v1].pb(v2);
         v[v2].pb(v1);
    }
    //dfs(1);

    ll con_comp=0;
    for(ll i=1;i<=ve;i++)
    {
        if(!visited[i])
        {
            dfs(i);
           
            
            con_comp++;
        }
    }
    cout<<con_comp<<endl;

}