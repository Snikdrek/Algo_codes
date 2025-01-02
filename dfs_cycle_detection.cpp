#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back
#define N 1000000

using namespace std;
vector<ll>v[N];
bool visited[N];
ll ans;
void dfs(ll ver,ll par)
{
    visited[ver]=true;
    // cout<<"start  "<<ver<<endl;
     for(ll i=0;i<v[ver].size();i++)
    {
        ll child = v[ver][i];
       
               if(visited[child])
               {
                continue;
               }
               dfs(child,ver);//passing parent as well to check if there is a cycle now parent is ver because we are going to child
               if(child!=par)//if child is not parent then there is a cycle because we are going to child from parent and if we are going to child from parent then there is a cycle
               
               {
                ans=1;
                return;
               }
    }
    
}
int main()
{
    ll ve,e;
    cin>>ve>>e;
    ans=0;
    for(ll i=0;i<e;i++)
    {
        ll v1,v2;
        cin>>v1>>v2;
        v[v1].pb(v2);
         v[v2].pb(v1);
    }
    dfs(1,-1);

    // ll con_comp=0;
    // for(ll i=1;i<=ve;i++)
    // {
    //     if(!visited[i])
    //     {
    //         dfs(i);
    //         cout<<1<<endl;
            
    //         con_comp++;
    //     }
    // }
    if(ans==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
   
}


//1 - 2

//  4  - 3