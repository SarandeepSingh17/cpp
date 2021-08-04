#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,a,b,x,ans=0;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>x>>a>>b;
        ans=(a+(100-x)*b)*10;
        cout<<ans<<endl;
    }
    return 0;
}