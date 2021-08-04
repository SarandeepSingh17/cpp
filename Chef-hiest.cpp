#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll D,d,p,q;
        cin>>D>>d>>p>>q;
        ll ans=0;
        ll days=D/d;
        if(days%2==0)
        {
            ans=d*((days/2)*(2*p+(days-1)*q));
        }
        else
        {
            ans=d*(days*(p+((days-1)/2)*q));
        }
        ans+=(D%d)*(p+(days*q));
        cout<<ans<<endl;
    }
    return 0;
}