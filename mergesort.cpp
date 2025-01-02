#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define N 1000
vector<ll>arr(N);


void merge(ll l,ll m,ll r)
{
    ll n1=m-l+1;
    ll n2=r-m;
    vector<ll>L(n1);
    vector<ll>R(n2);
    for(ll i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }

    for(ll i=0;i<n2;i++)
    {
        R[i]=arr[m+1+i];
    }

    ll i=0,j=0,k=l;


    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=R[j];
            j++;
            k++;
        }
        
    }

    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }


}

void mergesort(ll l,ll r)
{
    if(l<r)
    {
        ll m=l+(r-l)/2;
        mergesort(l,m);
        mergesort(m+1,r);
        merge(l,m,r);
    }
}

int main()
{
    ll n; cin>>n;
    
    for(ll i=0;i<n;i++) cin>>arr[i];
    mergesort(0,n-1);
    for(ll i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}