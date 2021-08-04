#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 int power(ll a, ll b,ll p )
{
    ll res = 1;     

    a = a % p; 
  
    if (a == 0) 
        return 0; 
 
    while (b > 0)
    {
        
        if (b & 1)
            res = (res*a) % p;

        b = b>>1; 
        a = (a*a) % p;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    ll n,m;
    cin>>n>>m;
    ll p=power(2,n,1e9+7);
    cout<<power(p-1,m,1e9+7)<<endl;
    }
    return 0;
}