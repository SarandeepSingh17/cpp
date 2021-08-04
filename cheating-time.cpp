#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    ll n,k,f;
    cin>>n>>k>>f;
    ll s,e;
    ll arr[n];
    ll start[n];
    ll end[n];
    for(ll i=0;i<n;i++)
    {
        cin>>s>>e;
        arr[i]=e-s;
        start[i]=s;
        end[i]=e;
    }
    ll sum=0;
    ll ans=0;
    ll mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(start[i+1]>=start[i] && start[i+1]<=end[i])
        {
            mx=max(mx,end[i]);
        }
        sum+=arr[i];
    }
    if(mx>0)
    {
    if(f-mx>=k)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    }
    else
    {
     ans=f-sum;
     if(ans>=k && k<=f)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    }
    }
    return 0;
}