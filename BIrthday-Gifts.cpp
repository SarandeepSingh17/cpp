#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll chef=0;
        ll twin=0;
        n=2*k+1;
        sort(a,a+n,greater<int>());
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && i<n-1)
            {
                chef=chef+a[i];
            }
            else if(i%2!=0 || i==n-1)
            {
                twin+=a[i];
            }
        }
        cout<<max(chef,twin);
    cout<<endl;
    }
    return 0;
}