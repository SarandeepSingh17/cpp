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
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int curr_length=0;
    int ans=0;
    int currsum=0;
    int m=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            currsum+=a[i];
        }
        if(a[i]<0 || i==n-1)
        {
            ans+=currsum*m;
            currsum=0;
            if(i>0)
            {
                m++;
            }
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}