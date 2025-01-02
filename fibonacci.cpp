#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pp pop_back

using namespace std;
ll fib(ll n)
{
    if(n==0 or n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }

}
int main()
{
    ll n;
    cin>>n; // or any desired value
    for(ll i=0;i<n;i++)
    {
       cout<<fib(i)<<" ";
    }
    cout<<endl;
}