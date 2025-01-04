#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
   for(ll i=0;i<n;i++)
   {
    ll tm=v[i];
    for(ll j=i-1;j>=0;j--)
    {
        if(v[j]>tm)
        {
            v[j+1]=v[j];
        }
        else
        {
            v[j+1]=tm;
            break;
        }
    }
   }
   for(int i = 0 ; i<n ; i++){
      cout<<v[i]<<" ";
    }
}