#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,m,d;
        cin>>x>>m>>d;
        int mx=0;
        int s1=m*x;
        int s2=x+d;
        mx=min(s1,s2);
        cout<<mx<<endl;
    }
    return 0;
}