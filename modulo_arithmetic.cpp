#include<bits/stdc++.h>
using namespace std;
#define ll long long
long power(ll a, ll b,int n)
{
    ll res=1;
    while(b>0)
    {
        if( (b&1)!=0)   //check if b is odd number
        {
            res= (res * a%n)%n;
        }
        a=(a%n * a%n) %n;    
        b=b>>1;    //b=b/2
    }
    return res;
}
int main()
{
    ll a,b;
    cin>>a>>b;
    cout<<power(a,b,10000001)<<endl;
    return 0;
}