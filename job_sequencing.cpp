#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pu pop_back
#define N 1000
#define mod 1000000000
using namespace std;
//job sequencing using greedy approach and stl
struct job 
{
    char jobid;
    int deadline;
    int profit;
};
bool compare(job j1,job j2)
{
    return j1.profit>j2.profit;
}
int main()
{
    ll n;
    cin>>n;
    job jobs[n+4];
    for(ll i=0;i<n;i++)
    {
        cin>>jobs[i].jobid>>jobs[i].deadline>>jobs[i].profit;
    }
    sort(jobs,jobs+n,compare);
    int result[n+4];
    bool slot[n+4];
    for(ll i=0;i<n;i++)
    {
        slot[i]=false;
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=min(n,(ll)jobs[i].deadline)-1;j>=0;j--)
        {
            if(slot[j]==false)
            {
                result[j]=i;
                slot[j]=true;
                break;
            }
        }
    }
    for(ll i=0;i<n;i++)
    {
        if(slot[i])
        {
            cout<<jobs[result[i]].jobid<<" ";
        }
    }
    cout<<endl;
    return 0;
}

