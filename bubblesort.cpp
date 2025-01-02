#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back

using namespace std;
void bubblesorti(vector<ll>&v,ll n)
{
      for(ll i=0;i<n-1;i++)
      {
        for(ll j=0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
            }
        }
      }
}
int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    bubblesorti(v,n);
    for(ll i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}