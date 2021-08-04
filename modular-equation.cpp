#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        ll flag=0;
        cin>>n>>m;
        vector <long long> mod(n+1,1);
        for(ll a=2;a<=n;a++)
        {
            ll x=m%a;
            flag+=mod[x];
        for(ll b=x;b<=n;b+=a)
        {
            mod[b]++;
        }
        }
        cout<<flag<<endl;
    }
    return 0;
}