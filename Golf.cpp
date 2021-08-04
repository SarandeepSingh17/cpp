#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,N,x,k;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N>>x>>k;
        int s=(N+1)%k;
        if(x%k==0 || x%k==s)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}