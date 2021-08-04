#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int ans=0;
        ans=2*(180+n);
        int c=a+b;
        ans-=c;
        cout<<ans<<endl;
    }
    return 0;
}