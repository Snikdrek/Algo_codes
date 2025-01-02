#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back
using namespace std;
vector<vector<ll>>ans;
void permute(vector<ll>&v,ll idx)
{
    if(idx==v.size())
    {
        ans.pb(v);
        return;
    }
    for(ll i=idx;i<v.size();i++)
    {
        swap(v[i],v[idx]);
        permute(v,idx+1);
        swap(v[i],v[idx]);
        
    }
    return;
}
//1 2i 3 4 5
//1 3 2 4 5
//1 3 4 2 5
int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
{
    cin>>v[i];
}
permute(v,0);
for(auto a : ans)
{
    for(auto i : a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

}
