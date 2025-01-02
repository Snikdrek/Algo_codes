#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back

using namespace std;
ll log4(ll n)
{
    ll ans=1;
   while(n>3)
   {
     n/=4;
     ans*=2;
   }
   return ans;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        
       ll n;
         cin>>n;
         ll ans=log4(n);
            
            cout<<ans<<endl;
    }
}